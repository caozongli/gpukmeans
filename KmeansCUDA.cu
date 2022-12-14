#include "KmeansCUDA.h"
#include <cuda_runtime.h>
#include <device_launch_parameters.h>
#include <curand_kernel.h>

#include <iostream>
#include <stdlib.h>

#define BLOCKSIZE_16 16
#define BLOCKSIZE_32 32
#define OBJLENGTH 75

/**
 * 初始化每个样本的类索引
 * out: objClusterIdx_Dev 每个样本的类别索引
 * in: objNum样本个数
 * in: maxIdx索引的最大值
 *      每个线程负责其中一个obj的类别初始化
 *      gridDim:    objNum / 32 + 1, 1
 *      blockDim:   比如32, 1
 *      blockDim * gridDim = objNum = 63504
 */
__global__ void KmeansCUDA_Init_ObjClusterIdx(int *objClusterIdx_Dev, int objNum, int maxIdx) {
    int index = blockDim.x * blockIdx.x + threadIdx.x;
    curandState s;
    curand_init(index, 0, 0, &s);
    if (index < objNum)
        objClusterIdx_Dev[index] = (int(curand_uniform(&s)* maxIdx));
}

/*
 * 更新： 更新kmeans聚类中心, 将obj的每一个维度上的值加到相应的类别上
 * in: objData_Dev 样本数据
 * in: objClusterIdx_Dev 每个样本的类别索引
 * out： clusterData_Dev 聚类中心
 * in: myParameter 输入参数
 *                  objLength
 *          objNum
 *
 *          gridDim:    objNum / 16 + 1, objLength / 16 + 1
 *          blockDim:   16, 16
 * */
__global__ void KmeansCUDA_Update_Cluster(float *objData_Dev, int *objClusterIdx_Dev,
                                          float *clusterData_Dev, sParameter myParameter) {
    int x_id = blockDim.x * blockIdx.x + threadIdx.x; // 列坐标
    int y_id = blockDim.y * blockIdx.y + threadIdx.y; // 行坐标

    if (x_id < myParameter.objLength && y_id < myParameter.objNum) {
        int index = y_id * myParameter.objLength + x_id;
        int clusterIdx = objClusterIdx_Dev[y_id];
        atomicAdd(&clusterData_Dev[clusterIdx * myParameter.objLength + x_id],
                  objData_Dev[index]);
    }
}

/**
 * 更新Kmeans的聚类中心, 统计每次迭代后的每个聚类的所含有的obj数
 * @param objClusterIdx_Dev 每个样本的聚类索引
 * @param objNumInCluster 每个聚类中的样本数
 * @param myParameter 输入参数
 *          总线程数： objNum
 *      gridDim:        objNum / 32 + 1, 1
 *      blockDim:       32, 1
 */
__global__ void KmeansCUDA_Count_objNumInCluster(int *objClusterIdx_Dev,
                                                 int *objNumInCluster, sParameter myParameter) {
    int index = blockDim.x * blockIdx.x + threadIdx.x;
    if (index < myParameter.objNum) {
        int clusterIdx = objClusterIdx_Dev[index];
        atomicAdd((int*)&objNumInCluster[clusterIdx], 1);
    }
}

/**
 * 更新Kmeans的聚类中心,先初始化聚类数量，加上每个类别的数量，更新聚类num
 * @param objClusterIdx_Dev 每个样本的类别索引
 * @param objNumInCluster  每个聚类中的样本数
 * @param myParameter 输入参数
 *
 *          gridDim:    objnum / 32 + 1, 1
 *          blockDim:   32, 1
 *
 */
__global__ void KmeansCUDA_Count_objNumInCluster1(int *objClusterIdx_Dev, int *objNumInCluster,
                                                  sParameter myParameter) {
     int index = blockDim.x * blockIdx.x + threadIdx.x;

     __shared__ int sData[80];
     if (threadIdx.x < myParameter.clusterNum) {
         sData[threadIdx.x] = 0;
     }

     __syncthreads();

     if (index < myParameter.objNum) {
         int clusterIdx = objClusterIdx_Dev[index];
         atomicAdd((int*)&sData[clusterIdx], 1);
     }

     __syncthreads();

     if (threadIdx.x < myParameter.clusterNum) {
         atomicAdd((int*)&objNumInCluster[threadIdx.x], sData[threadIdx.x]);
     }
}

/**
 * 平均Kmeans的聚类中心
 * @param clusterData_Dev 聚类中心
 * @param objNumInCluster 每个聚类中的样本数
 * @param myParameter 输入参数
 *          gridDim: clusterNum / 16 + 1, objLength / 16 + 1
 *          blockDim：16，16
 */
__global__ void KmeansCUDA_Scalue_Cluster(float *clusterData_Dev, int *objNumInCluster,
                                          sParameter myParameter) {
    int x_id = blockDim.x * blockIdx.x + threadIdx.x;
    int y_id = blockDim.y + blockIdx.y + threadIdx.y;

    if (x_id < myParameter.objLength && y_id < myParameter.clusterNum) {
        int index = y_id * myParameter.objLength + x_id;
        clusterData_Dev[index] /= float(objNumInCluster[y_id]);
    }
}

/**
 * 计算两个向量的欧拉距离
 * @param objects 样本数据
 * @param clusters 聚类中心数据
 * @param objLength 样本长度
 * @return
 */
__device__ inline static float EuclidDistance (float *objects, float *clusters,
                                               int objLength) {
    float dist = 0.0f;

    for (int i = 0;  i < objLength; ++ i) {
        float onePoint = objects[i] - clusters[i];
        dist = onePoint * onePoint + dist;
    }
    return (dist);
}

/**
 * 计算所有样本与聚类中心的欧式距离
 * @param objData_Dev 样本数据
 * @param objClusterIdx_Dev 样本的类别索引
 * @param clusterData_Dev 聚类中心
 * @param distOfObjAndCluster_Dev 每个样本与聚类中心的欧氏距离
 * @param objNumInCluster_Dev 每个聚类中的样本数
 * @param iter 迭代次数
 * @param myParameter 输入参数
 *
 *      16 * 16的block线程负责载入obj 和 cluster的length
 *      使用共享内存减少全局内存的读取
 *      读取次数减少了16次
 *
 *      gridDim: objNum / 16 + 1, objLength / 16 + 1
 *      blockDim: 16, 16
 */
__global__ void KmeansCUDA_distOfObjAndCluster(float *objData_Dev, int *objClusterIdx_Dev,
                             float *clusterData_Dev, float *distOfObjAndCluster_Dev,
                             int *objNumInCluster_Dev, int iter, sParameter myParameter) {
    int x_id = blockDim.x * blockIdx.x + threadIdx.x;
    int y_id = blockDim.y * blockIdx.y + threadIdx.y;

    const int oneBlockData = OBJLENGTH * BLOCKSIZE_16;
    __shared__ float objShared[oneBlockData]; //存样本中心
    __shared__ float cluShared[oneBlockData]; //存聚类中心

    /*数据读入共享内存*/
    if (y_id < myParameter.objNum) {
        float *objects = &objData_Dev[myParameter.objLength * blockDim.y * blockIdx.y];
        float *clusters = &clusterData_Dev[myParameter.objLength * blockDim.x * blockIdx.x];

        for (int index = BLOCKSIZE_16 * threadIdx.y + threadIdx.x;
            index < oneBlockData; index = BLOCKSIZE_16 * BLOCKSIZE_16 + index) {
            objShared[index] = objects[index];
            cluShared[index] = clusters[index];
        }
        __syncthreads();
    }

    if (x_id < myParameter.clusterNum && y_id < myParameter.objNum) {
        distOfObjAndCluster_Dev[y_id * myParameter.clusterNum + x_id]
        = EuclidDistance(&objShared[myParameter.objLength * threadIdx.y],
                         &cluShared[myParameter.objLength * threadIdx.x],
                         myParameter.objLength);
    }
}

/**
 * 计算所有样本与聚类中心的欧式距离
 * @param objData_Dev 样本数据
 * @param objClusterIdx_Dev  每个样本的类别索引
 * @param clusterData_Dev 聚类中心
 * @param distOfObjAndCluster_Dev 每个样本与聚类中心的欧式距离
 * @param objNumInCluster_Dev  每个聚类中的样本数
 * @param iter 迭代次数
 * @param myParameter 输入参数
 */
__global__ void KmeansCUDA_distOfObjAndCluster1(float *objData_Dev,
                            int *objClusterIdx_Dev, float *clusterData_Dev,
                            float *distOfObjAndCluster_Dev, int *objNumInCluster_Dev,
                            int iter, sParameter myParameter) {
    int x_id = blockDim.x * blockIdx.x + threadIdx.x;
    int y_id = blockDim.y * blockDim.y + threadIdx.y;

    __shared__ float objShared[BLOCKSIZE_16][OBJLENGTH];
    __shared__ float cluShared[BLOCKSIZE_16][OBJLENGTH];

    float *objects = &objData_Dev[myParameter.objLength * blockDim.y * blockIdx.y];
    float *clusters = &clusterData_Dev[myParameter.objLength * blockDim.x * blockIdx.x];

    if (y_id < myParameter.objNum) {

        for (int xidx = threadIdx.x; xidx < OBJLENGTH; xidx += BLOCKSIZE_16) {
            int index = myParameter.objLength * threadIdx.y + xidx;
            objShared[threadIdx.y][xidx] = objects[index];
            cluShared[threadIdx.y][xidx] = clusters[index];
        }
    }

    if (x_id < myParameter.clusterNum && y_id < myParameter.objNum) {
        if (objNumInCluster_Dev[x_id] < myParameter.minObjInClusterNum
            && iter > myParameter.maxKmeansIter - 2) {
            distOfObjAndCluster_Dev[y_id * myParameter.clusterNum + x_id] = 3e30;
        } else {
            distOfObjAndCluster_Dev[y_id * myParameter.clusterNum + x_id]
                = EuclidDistance(objShared[threadIdx.y], cluShared[threadIdx.x],
                                 myParameter.objLength);
        };
    }
}

/**
 * 更新所有样本的索引
 * @param objClusterIdx_Dev  每个样本的类别索引
 * @param distOfObjAndCluster_Dev 每个样本与聚类中心的欧式距离
 * @param myParameter 输入参数
 */
__global__ void KmeansCUDA_Update_ObjClusterIdx1(int *objClusterIdx_Dev,
                                                 float *distOfObjAndCluster_Dev,
                                                 sParameter myParameter) {
    int index = blockDim.x * blockIdx.x + threadIdx.x;

    if (index < myParameter.objNum) {
        float *objIndex = &distOfObjAndCluster_Dev[index * myParameter.clusterNum];
        int idx = 0;
        float dist = objIndex[0];
        for (int i = 1; i < myParameter.clusterNum; ++ i) {
            if (dist > objIndex[i]) {
                dist = objIndex[i];
                idx = i;
            }
        }
        objClusterIdx_Dev[index] = idx;
    }
}

/**
 * 计算所有样本与聚类中心的欧式距离
 * @param objClusterIdx_Dev 每个样本的类别索引
 * @param distOfObjAndCluster_Dev 每个样本与聚类中心的欧式距离
 * @param myParameter 输入参数
 *
 *          gridDim: objNum / 16 + 1, clusterNum / 16 + 1
 *          blockDim: 16, 16
 */
__global__ void KmeansCUDA_Update_ObjClusterIdx (int *objClusterIdx_Dev,
                                                 float *distOfObjAndCluster_Dev,
                                                 sParameter myParameter) {
    int y_id = blockDim.y * blockIdx.y + threadIdx.y;

    __shared__ float sData[BLOCKSIZE_16][BLOCKSIZE_16];
    __shared__ int sIndex[BLOCKSIZE_16][BLOCKSIZE_16];

    sData[threadIdx.y][threadIdx.x] = 2e30;
    sIndex[threadIdx.y][threadIdx.x] = 0;

    __syncthreads();

    if (y_id < myParameter.objNum) {
        float *objIndex = &distOfObjAndCluster_Dev[y_id * myParameter.clusterNum] ;
        sData[threadIdx.y][threadIdx.x] = objIndex[threadIdx.x];
        sIndex[threadIdx.y][threadIdx.x] = threadIdx.x;

        __syncthreads();

        /*规约求最小值*/
        for (int index = threadIdx.x + BLOCKSIZE_16;
                index < myParameter.clusterNum;
                index += BLOCKSIZE_16) {
            float nextData = objIndex[index];
            if (sData[threadIdx.y][threadIdx.x] > nextData) {
                sData[threadIdx.y][threadIdx.x] = nextData;
                sIndex[threadIdx.y][threadIdx.x] = index;
            }
        }

        for (int step = BLOCKSIZE_16 / 2; step > 1; step = step >> 1) {
            int idxStep = threadIdx.x + step;
            if (threadIdx.x < step &&
                sData[threadIdx.y][threadIdx.x] > sData[threadIdx.y][idxStep]) {
                sData[threadIdx.y][threadIdx.x] = sData[threadIdx.y][idxStep];
                sIndex[threadIdx.y][threadIdx.x] = sIndex[threadIdx.y][idxStep];
            }
        }

        if (threadIdx.x == 0) {
            objClusterIdx_Dev[y_id] = sData[threadIdx.y][0] < sData[threadIdx.y][1] ? sIndex[threadIdx.y][0] : sIndex[threadIdx.y][1];
        }
    }
}

void KmeansCUDA(float *objData_Host, int *objClassIdx_Host,
                float *centerData_Host, sParameter myParameter) {
    float *objData_Dev, *centerData_Dev;
    cudaMalloc((void**)&objData_Dev,
               myParameter.objNum * myParameter.objLength * sizeof(float));
    cudaMalloc((void**)&centerData_Dev,
               myParameter.clusterNum * myParameter.objLength * sizeof(float ));
    cudaMemcpy(objData_Dev, objData_Host,
               myParameter.objLength * myParameter.objNum * sizeof(float ),
               cudaMemcpyHostToDevice);

    int *objClassIdx_Dex;
    cudaMalloc((void**)&objClassIdx_Dex, myParameter.objNum * sizeof (int));

    float *distOfObjAndCluster_Dev; // 每个样本与聚类中心的欧式距离
    cudaMalloc((void**)&distOfObjAndCluster_Dev,
               myParameter.objNum * myParameter.clusterNum * sizeof (float));

    int *objNumInCluster_Dev; //每个聚类中的样本数
    cudaMalloc((void**)&objNumInCluster_Dev,
               myParameter.clusterNum * sizeof (int));

    /*线程快和线程格*/
    dim3 dimBlock1D_16(BLOCKSIZE_16 * BLOCKSIZE_16);
    dim3 dimBlock1D_32 (BLOCKSIZE_32 * BLOCKSIZE_32);
    dim3 dimGrid1D_16 ((myParameter.objNum + BLOCKSIZE_16 * BLOCKSIZE_16 - 1) / dimBlock1D_16.x);
    dim3 dimGrid1D_32((myParameter.objNum + BLOCKSIZE_32 -1) / dimBlock1D_32.x);

    dim3 dimBlock2D(BLOCKSIZE_16, BLOCKSIZE_16);
    dim3 dimGrid2D_Cluster((myParameter.objLength + BLOCKSIZE_16 - 1) / dimBlock2D.x,
                           (myParameter.clusterNum + BLOCKSIZE_16 - 1)/ dimBlock2D.y);
    dim3 dimGrid2D_ObjNum_Objlen((myParameter.objLength + BLOCKSIZE_16 - 1) / dimBlock2D.x,
                                 (myParameter.objNum + BLOCKSIZE_16 - 1) / dimBlock2D.y );
    dim3 dimGrid2D_objCluster((myParameter.clusterNum + BLOCKSIZE_16 - 1) / dimBlock2D.x,
                              (myParameter.objNum + BLOCKSIZE_16 - 1) / dimBlock2D.y);
    dim3 dimGrid2D_objNum_BLOCKSIZE16(1, (myParameter.objNum + BLOCKSIZE_16 - 1)/ dimBlock2D.y);

    cudaEvent_t start_GPU, endGPU;
    float elaspsedTime;
    cudaEventCreate(&start_GPU);
    cudaEventCreate(&endGPU);
    cudaEventRecord(start_GPU, 0);

    KmeansCUDA_Init_ObjClusterIdx<<<dimGrid1D_16, dimBlock1D_16>>>(objClassIdx_Dex,
                                                                   myParameter.objNum,
                                                                   myParameter.clusterNum);
    for (int i = 0; i < myParameter.maxKmeansIter; ++ i) {
        cudaMemset(centerData_Dev, 0,
                   myParameter.clusterNum * myParameter.objLength * sizeof (float));
        cudaMemset(objNumInCluster_Dev, 0,
                   myParameter.clusterNum * sizeof(int));

        /*统计每一类样本和*/
        KmeansCUDA_Update_Cluster<<<dimGrid2D_ObjNum_Objlen, dimBlock2D>>>(objData_Dev,
                                                                           objClassIdx_Dex,
                                                                           centerData_Dev,
                                                                           myParameter);
        /*统计每一类样本有多少个*/
//        KmeansCUDA_Count_objNumInCluster<<<dimGrid1D_32, dimBlock1D_32>>>(objClassIdx_Dex,
//                                                                          objNumInCluster_Dev,
//                                                                          myParameter);
        KmeansCUDA_Count_objNumInCluster1<<<dimGrid1D_16, dimBlock1D_16>>>(objClassIdx_Dex,
                                                                           objNumInCluster_Dev,
                                                                           myParameter);

        /* 聚类中心平均 = 样本和 / 样本个数 */
        KmeansCUDA_Scalue_Cluster<<<dimGrid2D_objCluster, dimBlock2D>>>(centerData_Dev,
                                                                        objNumInCluster_Dev,
                                                                        myParameter);
        /* 计算每个样本与每个聚类中心的欧式距离 */
        KmeansCUDA_distOfObjAndCluster1<<<dimGrid2D_objCluster, dimBlock2D>>>(objData_Dev,
                                                                              objClassIdx_Dex,
                                                                              centerData_Dev,
                                                                              distOfObjAndCluster_Dev,
                                                                              objNumInCluster_Dev,
                                                                              i,
                                                                              myParameter);

        /* 根据每个样本与聚类中心的欧式距离更新样本类标签 */
        KmeansCUDA_Update_ObjClusterIdx<<<dimGrid2D_objNum_BLOCKSIZE16, dimBlock2D>>>(
                objClassIdx_Dex, distOfObjAndCluster_Dev, myParameter);
    }
    cudaEventRecord(endGPU, 0);
    cudaEventSynchronize(endGPU);
    cudaEventElapsedTime(&elaspsedTime, start_GPU, endGPU);

    std::cout << "Kmeans 的运行时间为:" << elaspsedTime << "ms." << std::endl;

    cudaMemcpy(objClassIdx_Host, objClassIdx_Dex, myParameter.objNum * sizeof (int), cudaMemcpyDeviceToHost);
    cudaMemcpy(centerData_Host, centerData_Dev, myParameter.objNum * myParameter.objLength * sizeof (float), cudaMemcpyDeviceToHost );

    cudaFree(objData_Dev);
    cudaFree(objClassIdx_Dex);
    cudaFree(centerData_Dev);
    cudaFree(distOfObjAndCluster_Dev);
    cudaFree(objNumInCluster_Dev);
}





