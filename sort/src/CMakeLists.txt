
set(HEADER_LIST "/home/jsaavedr/Research/git/courses/eda_cpp/sort/include/sort/sort.hpp")
add_library(modern_library sort.cpp ${HEADER_LIST})
target_include_directories(modern_library PUBLIC ../include)
target_compile_features(modern_library PUBLIC cxx_std_11)

