cmake_minimum_required(VERSION 3.20.0)

# message("<========= 0.0 =========>")
message("<========= 2.0. consoleexe CMakeLists.txt started =========>")

# 2.1. set executable project name 
project(${MY_EXECUTABLE_NAME})
message("<========= 2.1. executable project name is - ${MY_LIBRARY_NAME} =========>")

# 2.2. define OutputDirlib - "SourceDir/bin/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)"
set(OutputDirlib ${PROJECT_SOURCE_DIR}/bin/${OSName}/${OSBitness}/${Buildtype})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OutputDirlib})
message("<========= 2.2 consoleexe output dir - ${OutputDirlib} =========>")

# 2.3 set source file 
set(SOURCE_FILE    main.cpp)
message("<========= 2.3. Source file - ${SOURCE_FILE} =========>")

# 2.4 Create executable on define output path
add_executable(${MY_EXECUTABLE_NAME} ${SOURCE_FILE})
message("<========= 2.4. executable - ${MY_EXECUTABLE_NAME} will create at - ${OutputDirlib} =========>")