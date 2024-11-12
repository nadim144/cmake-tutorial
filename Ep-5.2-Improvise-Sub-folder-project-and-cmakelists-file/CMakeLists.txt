cmake_minimum_required(VERSION 3.20.0)

# Library name
set(MY_LIBRARY_NAME myconsolelib)

# Executable name.
set(MY_EXECUTABLE_NAME myconsoleexe)

# add subdirectory of library
add_subdirectory(consolelib)

#add subdirectory of executable 
add_subdirectory(consoleexe)

target_link_libraries(${MY_EXECUTABLE_NAME} ${MY_LIBRARY_NAME})