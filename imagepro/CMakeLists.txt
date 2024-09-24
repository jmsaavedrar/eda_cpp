
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(imagepro
VERSION 1.0
LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(imagepro imagepro.cpp src/image.cpp)
target_include_directories(imagepro PUBLIC ${PROJECT_SOURCE_DIR}/include)


# add the executable