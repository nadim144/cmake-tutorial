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