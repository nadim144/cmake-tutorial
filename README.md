# cmake-tutorial
## Ep-1.1-Getting Started with CMake on Linux.
### Tools required getting started CMake on Linux.
below tools should be install in your Linux machine, In my case I am using WSL-Ubuntu 24.04
* build-essential
* g++
* gdb
* cmake
* ninja-build

To install above tool, please open Ubuntu 22.04 terminal or same terminal you can open through VS Code and run following command.
> $sudo apt install build-essential g++ gdb cmake ninja-build

After installation please verify all the install tool as following
> $g++ --version
```
g++ (Ubuntu 11.4.0-9ubuntu1) 11.4.0
Copyright (C) 2021 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
> $gdb --version
```
GNU gdb (Ubuntu 15.0.50.20240403-0ubuntu1) 15.0.50.20240403-git
Copyright (C) 2024 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
```
> $cmake --version
~~~
cmake version 3.28.3
CMake suite maintained and supported by Kitware (kitware.com/cmake).
~~~
> $ninja --version
~~~
1.11.1
~~~
and below Extension should be install in Visual Studio Code and make sure it is install. it's very easy to do that.
* C/C++
* C/C++ Extension Pack
* C/C++ Themes
* CMake
* CMake Tools


## Ep-1.2-Getting Started with CMake on Windows.