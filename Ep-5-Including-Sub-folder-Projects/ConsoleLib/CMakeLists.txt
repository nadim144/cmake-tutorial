cmake_minimum_required(VERSION 3.20.0)

# define libaray name as ConsoleLib
project(ConsoleLib VERSION 1.0.0)

# define OSbitness
set(OSBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()

# define library OutputDir - "SourceDir/out/li/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)"
set(OutputDirlib ${CMAKE_SOURCE_DIR}/bin/lib/${CMAKE_SYSTEM_NAME}/${OSBitness}/${CMAKE_BUILD_TYPE})

# set OutputDirlib to CMAKE_ARCHIVE_OUTPUT_DIRECTORY
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OutputDirlib})

# include header directory 
include_directories(header)

# Create static library name as "ConsoleLib" based on src/Input.cpp src/Output.cpp
add_library(${PROJECT_NAME} src/Input.cpp src/Output.cpp)