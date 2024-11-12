cmake_minimum_required(VERSION 3.20.0)

project(${MY_EXECUTABLE_NAME})

# set OSBitness
set(OBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()

# define OutputDirlib - "SourceDir/bin/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)"
set(OutputDirlib ${PROJECT_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}/${OSBitness}/${CMAKE_BUILD_TYPE})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OutputDirlib})

add_executable(${MY_EXECUTABLE_NAME} main.cpp)