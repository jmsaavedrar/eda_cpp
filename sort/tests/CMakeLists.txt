add_executable(test test.cpp)
target_link_libraries(test sort)
target_include_directories(test PUBLIC ${PROJECT_SOURCE_DIR}/include)
