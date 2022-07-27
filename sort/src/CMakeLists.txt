set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/libs)
add_library(sort SHARED sort.cpp utils.cpp)
target_include_directories(sort PUBLIC ${PROJECT_SOURCE_DIR}/include)


