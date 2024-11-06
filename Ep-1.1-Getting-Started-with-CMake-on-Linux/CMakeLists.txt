cmake_minimum_required(VERSION 3.28.0)

# Define project name, it is on your choice, whatever name you want to keep.
project(Hello-CMake)

# Here I keep executable name same as project name. ${PROJECT_NAME} -> Hello-CMake
add_executable(${PROJECT_NAME} main.cpp)