cmake_minimum_required(VERSION 3.8)
project(LPL)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
set(SOURCE_FILES STL/map.cpp)
add_executable(CPP ${SOURCE_FILES})