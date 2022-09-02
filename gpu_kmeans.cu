#include <stdio.h>
#include <stdlib.h>

#define I(row, col, ncols) (row = ncols + col)

#define CUDA_CALL(x) {if ((x) != cudaSuccess) { \
    printf("CUDA error at %s:%d\n", __FILE__, __LINE__); \
    printf("   %s\n", cudaGetErrorString(cudaGetLastError())); \
    exit (EXIT_FAILURE);\
}}

__global__ void get_dst (float *dst, float *x, float *y,
                         float *mu_x, float *mu_y) {
    int i = blockIdx.x;
    int j = threadIdx.x;

    dst[I(i, j, blockDim.x)] = (x[i] - mu_x[j]) * (x[i] - mu_x[j]);
    dst[I(i, j, blockDim.x)] += (y[i] - mu_y[j]) * (y[i] - mu_y[j]);
}

__global__ void regroup (int *group, float *dst, int k) {
    int i = blockIdx.x;
    int j;
    float min_dst;

    min_dst = dst[I(i, 0, k)];
    group[i] = 1;
    for (j = 1; j < k; ++ j) {
        if (dst[I(i, j, k)] < min_dst) {
            min_dst = dst[I(i, j, k)];
            group[i] = j + 1;
        }
    }
}

__global__ void clear (float *sum_x, float *sum_y, int *nx, int *ny) {
    int j = threadIdx.x;
    sum_x[j] = 0;
    sum_y[j] = 0;
    nx[j] = 0;
    ny[j] = 0;
}

__global__ void recenter_step1(float *sum_x, float *sum_y, int *nx, int *ny,
                               float *x, float *y, int *group, int n) {
    int j = threadIdx.x;

    for (int i = 0; i < n; ++ i) {
        if (group[i] == (j + 1)) {
            sum_x[j] += x[i];
            sum_y[j] += y[i];
            nx[j] ++;
            ny[j] ++;
        }
    }
}

__global__ void recenter_step2(float *mu_x, float *mu_y, float *sum_x,
                               float *sum_y, int *nx, int *ny) {
    int j = threadIdx.x;
    mu_x[j] = sum_x[j] / nx[j];
    mu_y[j] = sum_y[j] / ny[j];
}

void kmeans (int nreps, int n, int k,
             float *x_d, float *y_d, float *mu_x_d, float *mu_y_d,
             int *group_d, int *nx_d, int *ny_d,
             float *sum_x_d, float *sum_y_d, float *dst_d) {
    int i;
    for (i = 0; i < nreps; ++ i) {
        get_dst<<<n, k>>>(dst_d, x_d, y_d, mu_x_d, mu_y_d);
        regroup<<<n, 1>>>(group_d, dst_d, k);
        clear<<<1, k>>>(sum_x_d, sum_y_d, nx_d, ny_d);
        recenter_step1<<<1, k>>>(sum_x_d, sum_x_d, nx_d, ny_d, x_d, y_d,
                group_d, n);
        recenter_step2<<<1, k>>>(mu_x_d, mu_y_d, sum_x_d, sum_y_d, nx_d,
                ny_d);
    }
}

void read_data(float **x, float **y, float **mu_x, float **my_y,
               int *n, int *k);
void print_results(int *group, float *mu_x, float *my_y, int n, int k);

int main () {
    int n; /*样本点的个数*/
    int k; /*最后聚成k类*/
    int *group;
    float *x = nullptr, *y = nullptr, *mu_x = nullptr, *mu_y = nullptr;

    /*gpu variables*/
    int *group_d, *mx_d, *my_d;
    float *x_d, *y_d, *mu_x_d, *mu_y_d, *sum_x_d, *sum_y_d, *dst_d;

    /*read data from files on cpu*/
    read_data(&x, &y, &mu_x, &mu_y, &n, &k);

    /*allocate cpu memory*/
    group = (int *) malloc (n * sizeof (int));

    /* allocate gpu memory*/
    CUDA_CALL(cudaMalloc((void**) &group_d, n * sizeof (int)));
    CUDA_CALL(cudaMalloc((void**) &mx_d, k * sizeof (int)));
    CUDA_CALL(cudaMalloc((void**) &my_d, k * sizeof (int )));
    CUDA_CALL(cudaMalloc((void**) &x_d, n * sizeof (int)));
    CUDA_CALL(cudaMalloc((void**) &y_d, n * sizeof (int)));
    CUDA_CALL(cudaMalloc((void**) &mu_x_d, k * sizeof (float)));
    CUDA_CALL(cudaMalloc((void**) &mu_y_d, k * sizeof (float)));
    CUDA_CALL(cudaMalloc((void**) &sum_x_d, k * sizeof (float)));
    CUDA_CALL(cudaMalloc((void**) &sum_y_d, k * sizeof (float)));
    CUDA_CALL(cudaMalloc((void**) &dst_d, n * k * sizeof (float)));

    /* write data to gpu*/
    CUDA_CALL(cudaMemcpy(x_d, x, n * sizeof (float), cudaMemcpyHostToDevice));
    CUDA_CALL(cudaMemcpy(y_d, y, n * sizeof (float), cudaMemcpyHostToDevice));
    CUDA_CALL(cudaMemcpy(mu_x_d, mu_x, k * sizeof (float), cudaMemcpyHostToDevice));
    CUDA_CALL(cudaMemcpy(mu_y_d, mu_y, k * sizeof (float), cudaMemcpyHostToDevice));

    /*perform kmeans*/
    kmeans(10, n, k, x_d, y_d, mu_x_d, mu_y_d, group_d, mx_d, my_d,
           sum_x_d, sum_y_d, dst_d);

    /*read back data from gpu*/
    CUDA_CALL(cudaMemcpy(group, group_d, n * sizeof (int), cudaMemcpyDeviceToHost));
    CUDA_CALL(cudaMemcpy(mu_x, mu_x_d, k * sizeof (float), cudaMemcpyDeviceToHost));
    CUDA_CALL(cudaMemcpy(mu_y, mu_y_d, k * sizeof (float), cudaMemcpyDeviceToHost));

    /*prin results and clean up*/
    print_results(group, mu_x, mu_y, n, k);

    free(x);
    free(y);
    free(mu_x);
    free(mu_y);
    free(group);

    CUDA_CALL(cudaFree(x_d));
    CUDA_CALL(cudaFree(y_d));
    CUDA_CALL(cudaFree(mu_x_d));
    CUDA_CALL(cudaFree(mu_y_d));
    CUDA_CALL(cudaFree(group_d));
    CUDA_CALL(cudaFree(mx_d));
    CUDA_CALL(cudaFree(my_d));
    CUDA_CALL(cudaFree(sum_x_d));
    CUDA_CALL(cudaFree(sum_y_d));
    CUDA_CALL(cudaFree(dst_d));

    return 0;
}
