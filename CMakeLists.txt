cmake_minimum_required(VERSION 3.28)
project(wektory)

set(CMAKE_CXX_STANDARD 17)

add_executable(wektory main.cpp
        Vector.h
        Vector.cpp)
