cmake_minimum_required(VERSION 3.28.0)

# (1) define project name
project(LibraryExecutable)

# (2) set OSBitness
set(OSBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()

# (3) define executable output directory ExeFullOutputDir -> SourceDir/out/bin/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)
set(ExeFullOutputDir ${CMAKE_SOURCE_DIR}/out/bin/${CMAKE_SYSTEM_NAME}/${OSBitness}/${CMAKE_BUILD_TYPE})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${ExeFullOutputDir})

# (4) define libarary output directory -> sourceDir/out/lib/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)
set(LibOutputDir ${CMAKE_SOURCE_DIR}/out/lib/${CMAKE_SYSTEM_NAME}/${OSBitness}/${CMAKE_BUILD_TYPE})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${LibOutputDir})

# (5) include hederfile directories
include_directories(${CMAKE_SOURCE_DIR})

# (6) Create library 
add_library(console ${CMAKE_SOURCE_DIR}/console.cpp)

# (7) Create Executable 
add_executable(${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/main.cpp)

# (8) Linking library to executable
target_link_libraries(${PROJECT_NAME} console)