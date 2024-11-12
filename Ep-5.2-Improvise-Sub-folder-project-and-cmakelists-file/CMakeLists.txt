cmake_minimum_required(VERSION 3.20.0)
# message("<========= 0.0 =========>")
message("<========= 0.0. Main CMakeLists.txt started =========>")

# 0.1. set library name
set(MY_LIBRARY_NAME myconsolelib)
message("<========= 0.1. library name set as: ${MY_LIBRARY_NAME} =========>")

# 0.2. set executable name.
set(MY_EXECUTABLE_NAME myconsoleexe)
message("<========= 0.2. executable name set as: ${MY_EXECUTABLE_NAME} =========>")

# 0.3. detact oprating system
set(OSName ${CMAKE_SYSTEM_NAME})
message("<========= 0.3. Detected Operating System - ${OSName} =========>")

# 0.4. define OSBitness x86/x64
if(CMAKE_SIZEOF_VOID_P EQUAL 4)
    set(OSBitness "x86")
    message("<========= 0.4. Detected OSbitness - ${OSBitness} =========>")
elseif(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(OSBitness "x64")
    message("<========= 0.4. Detected OSbitness - ${OSBitness} =========>")
else()
    message(FATAL_ERROR "0.4. Unsupported architecture")
endif()

# 0.5. detect build type - debug/release
set(Buildtype ${CMAKE_BUILD_TYPE})
message("<========= 0.5. Detected Build type (Debug/Release) - ${Buildtype} =========>")

# 0.6. add subdirectory of library
add_subdirectory(consolelib)
message("<========= 0.6. Added subdirectory - consolelib for library =========>")

# 0.8. add subdirectory of executable 
add_subdirectory(consoleexe)
message("<========= 0.8. Added subdirectory - consoleexe for executable =========>")


# 0.9. target linking with static library
target_link_libraries(${MY_EXECUTABLE_NAME} ${MY_LIBRARY_NAME})
message("<========= 0.9. target (executable) linked with library =========>")