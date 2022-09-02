#ifndef __GPUKMEANS_KMEANSCUDA_H__
#define __GPUKMEANS_KMEANSCUDA_H__

#include "ClassParameter.h"

void KmeansCUDA(float *objData, int *objClusterIdx, float *clusterData, sParameter myParameter);

#endif