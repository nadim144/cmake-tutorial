
cmake_minimum_required(VERSION 3.20.0)

project(ConsoleLib VERSION 1.0.0)

include_directories(header)
add_library(${PROJECT_NAME} src/Input.cpp src/Output.cpp)