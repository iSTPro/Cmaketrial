cmake_minimum_required(VERSION 3.26.3)

project(MyMathClass LANGUAGES CXX)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(MyMathClass SHARED MyMathClass.cpp)
