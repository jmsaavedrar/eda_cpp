cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER /usr/bin/g++)

# set the project name
project(source
VERSION 1.0
LANGUAGES CXX)

add_subdirectory(src)
add_subdirectory(tests)
# add the executable
