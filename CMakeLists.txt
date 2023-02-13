cmake_minimum_required(VERSION 3.17)
project(Stack_Array)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(Stack_Array StackDr.cpp Stack.h)