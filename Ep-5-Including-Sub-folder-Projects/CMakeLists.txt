cmake_minimum_required(VERSION 3.20.0)

project(ConsoleExecutable VERSION 1.0.0)

include_directories(ConsoleLib)
#include_directories(ConsoleLib/header)
add_subdirectory(ConsoleLib)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} ConsoleLib)