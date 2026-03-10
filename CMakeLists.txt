cmake_minimum_required(VERSION 4.1)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSA
        Sorting/bubble-sort.cpp
        Sorting/insertion-sort.cpp
        Sorting/selection-sort.cpp
        Sorting/merge-sort.cpp
        Sorting/quick_sort.cpp)
