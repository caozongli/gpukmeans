cmake_minimum_required(VERSION 3.20)
project(kmeans CUDA)

set(CMAKE_CUDA_STANDARD 14)

set(LIB_SRC
        KmeansCUDA.cu
        ReadSaveImage.cpp)

add_library(gpukmeanslib SHARED ${LIB_SRC})

set(LIBS
        gpukmeanslib)

add_executable(kmeans main.cu)

set_target_properties(kmeans PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)
target_link_libraries(kmeans ${LIBS})

