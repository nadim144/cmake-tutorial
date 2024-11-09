cmake_minimum_required(VERSION 3.20.0)

# define project name which is executable which consume library
project(ConsoleExecutable VERSION 1.0.0)

# define OSBitness
# define OSbitness
set(OSBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()


# define executable OutputDirExe - "SourceDir/out/li/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)"
set(OutputDirExe ${CMAKE_SOURCE_DIR}/bin/out/${CMAKE_SYSTEM_NAME}/${OSBitness}/${CMAKE_BUILD_TYPE})

# set OutputDirExe to CMAKE_RUNTIME_OUTPUT_DIRECTORY
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OutputDirExe})

# define subdirectory
add_subdirectory(ConsoleLib)

# define include directory
include_directories(ConsoleLib)


# create executabel same name as project name
add_executable(${PROJECT_NAME} main.cpp)

# link library to executable.
target_link_libraries(${PROJECT_NAME} ConsoleLib)