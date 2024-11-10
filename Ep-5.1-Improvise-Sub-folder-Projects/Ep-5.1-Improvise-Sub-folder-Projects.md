# Ep-5.1-Improvise-Sub-folder-Projects

![Ep-5.1-Improvise-Sub-folder-Projects](img/01.jpg)


CMakeLists.txt
~~~
cmake_minimum_required(VERSION 3.20.0)

# Library name
set(LIBRARY_NAME ConsoleLib)

# Executable name.
set(EXECUTABLE_NAME ConsoleExe)

# add subdirectory of library
add_subdirectory(ConsoleLib)

#add subdirectory of executable 
add_subdirectory(ConsoleExe)

target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})
~~~

CMakeLists.txt -> ConsoleLib
~~~
cmake_minimum_required(VERSION 3.20.0)

project(${LIBRARY_NAME})

# message("MY_PROJECT_NAME: ${LibraryName}")

# set OSBitness
set(OBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()

# define OutputDirlib - "SourceDir/bin/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)"
set(OutputDirlib ${PROJECT_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}/${OSBitness}/${CMAKE_BUILD_TYPE})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${OutputDirlib})

# include directories
include_directories(header)

# Create static library on define output path
add_library(${LIBRARY_NAME} src/input.cpp src/output.cpp)
~~~

CMakeList.txt -> ConsoleExe
~~~
cmake_minimum_required(VERSION 3.20.0)

project(${EXECUTABLE_NAME})

# set OSBitness
set(OBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()

# define OutputDirlib - "SourceDir/bin/(Linux/Windows/MacOs)/(x64/x86)/(Debug/Release)"
set(OutputDirlib ${PROJECT_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME}/${OSBitness}/${CMAKE_BUILD_TYPE})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OutputDirlib})

add_executable(${EXECUTABLE_NAME} main.cpp)
~~~

Note: CMakeList.txt is not very optimise. I do the optimization in next chapter. 