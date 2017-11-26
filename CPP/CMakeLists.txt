cmake_minimum_required(VERSION 3.8)
project(LPL)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Base/control_flow.cpp)
#set(SOURCE_FILES hello.cpp)
add_executable(CPP ${SOURCE_FILES})