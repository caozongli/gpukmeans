#include "ReadSaveImage.h
#include <fstream>
#include <iostream>

void ReadFile(float *fileData, std::string fileName, int dataNum) {
    std::fstream file;
    file.open(fileName, std::ios::in);

    if (!file.is_open()) {
        std::cout << "打开文件失败" << std::endl;
        return ;
    }
    for (int i = 0; i < dataNum; ++ i) file >> fileData[i];

    file.close();
}

void ReadData(float *fileData, sParameter myParameter, const std::string &filePath) {
    ReadFile(fileData, filePath, myParameter.objNum*myParameter.objLength);
}

void SaveFile(int *fileData, std::string fileName, int dataNum) {
    std::fstream file;
    file.open(file, std::ios::out);

    if (!file.is_open()) {
        std::cout << "写打开文件失败" << std::endl;
        return ;
    }

    for (int i = 0; i < dataNum; ++ i) file << fileData[i] << std::endl;

    file.close();
}

void SaveData(int *fileData, sParameter myParameter, const std::string &filePath) {
    SaveFile(fileData, filePath, myParameter.objNum);
}