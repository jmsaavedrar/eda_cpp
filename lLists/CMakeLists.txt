
cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
# set the project name

project(misc
VERSION 1.0
LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#add_subdirectory(src)
#add_subdirectory(tests)

add_executable(test tests/test.cpp src/node.cpp src/linkedList.cpp)
add_executable(test_s_q tests/test_stack_queue.cpp src/node.cpp src/stack.cpp src/queue.cpp)
target_include_directories(test PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_include_directories(test_s_q PUBLIC ${PROJECT_SOURCE_DIR}/include)


# add the executable
