#ifndef __GPUKMEANS_READSABEIMAGE_H__
#define __GPUKMEANS_READSABEIMAGE_H__

#include "ClassParameter.h"
#include <string>

void ReadData(float *fileData, sParameter myParameter, const std::string &filePath);
void SaveData(int *fileData, sParameter myParameter, const std::string &filePath);

#endif