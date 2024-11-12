cmake_minimum_required(VERSION 3.20.0)

# message("<========= 0.0 =========>")
message("<========= 1.0. consolelib CMakeLists.txt started =========>")

# 1.1. set library project name 
project(${MY_LIBRARY_NAME})
message("<========= 1.1. library project name is - ${MY_LIBRARY_NAME} =========>")

# 1.2. define OutputDirlib - "SourceDir/bin/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)"
set(OutputDirlib ${PROJECT_SOURCE_DIR}/bin/${OSName}/${OSBitness}/${Buildtype})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OutputDirlib})
message("<========= 1.2 consolelib output dir - ${OutputDirlib} =========>")

# 1.3. include header directories
include_directories(header)
message("<========= 1.3 Include header directory =========>")

# 1.4 set source file 
set(SRC_FILE    src/input.cpp src/output.cpp)
message("<========= 1.4. Source file - ${SRC_FILE} =========>")

# Create static library on define output path
add_library(${MY_LIBRARY_NAME} ${SRC_FILE})
message("<========= 1.5. Library - ${MY_LIBRARY_NAME} will create at - ${OutputDirlib} =========>")