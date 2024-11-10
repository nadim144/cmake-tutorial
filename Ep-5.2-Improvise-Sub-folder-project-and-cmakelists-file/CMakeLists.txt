# define minimum version required
cmake_minimum_required(VERSION 3.20.0)
message("Minimum Version required: ${VERSION}")

# Set static libraray name
set(STATIC_LIB_NAME Consolelibrary)
message("Static Lib Name - STATIC_LIB_NAME => ${STATIC_LIB_NAME}")

# set executable name
set(EXECUTABLE_NMAE ConsoleExe)
message("Executable Name - EXECUTABLE_NMAE => ${EXECUTABLE_NMAE}")

# Set OSBitness
set(OSBitness 32)
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness 64)
endif()
message("OSBitness is => ${OSBitness}")

set(OSName = ${CMAKE_SYSTEM_NAME})
message("OS Name => ${OSName}")
