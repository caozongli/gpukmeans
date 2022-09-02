#ifndef __GPUKMEANS_CLASSPARAMETER_H__
#define __GPUKMEANS_CLASSPARAMETER_H__

class sParameter {
public:
    int objNum; // 样本数
    int objLength; // 样本维度
    int clusterNum; // 聚类数
    int minClusterNum; //最少聚类数
    int minObjInClusterNum; // 每个聚类中的最少样本数
    int maxKmeansIter; // 最大迭代次数
};

#endif