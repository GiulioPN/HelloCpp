# About the Hello Cpp project

Following, the structure for the C++ template project:

```bash
HelloCpp
    ├── CMakeLists.txt (1)
    ├── README.md
    └── src
        ├── appsrc 
        │   ├── CMakeLists.txt (2)
        │   └── HelloCpp
        │       ├── CMakeLists.txt (4)
        │       └── HelloCpp.cpp
        ├── CMakeLists.txt (2)
        └── libsrc
            ├── CMakeLists.txt (2)
            └── Statistics
                ├── CMakeLists.txt (3)
                └── include
                    └── Statistics
                        └── DescriptiveStatistics.hpp
```

There are multiple `CMakeLists.txt` file which can group in 4 categories:

1. The `CMakeLists.txt` of the all project
2. The `CMakeLists.txt` which include the subdirectories
3. The `CMakeLists.txt` of the library
4. The `CMakeLists.txt` of the application

## 1. The Project CMake file

In this project the CMake project script sets up a project named "HelloCpp" with the following key configurations:

1. Requires at least CMake version 3.20:  
   `cmake_minimum_required(VERSION 3.20)`
2. Uses the C++20 standard for compilation:  
   `project(HelloCpp)`  
   These information are saved in some CMake variables. See the documentation about the command for more info.
3. Finds and includes the Boost library version 1.82.0, specifically the system component:
   `find_package(Boost 1.82.0 COMPONENTS system REQUIRED)`  
4. Sets the output directory for executables to ${CMAKE_BINARY_DIR}/bin:
   `set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)`
   This command is important to put the executable target in a specific folder. Remember that the `${CMAKE_BINARY_DIR}` is the cmake variable which has the path to the build directory
5. Includes the src subdirectory in the build process.
   `add_subdirectory(src)`

## 2. The CMake which add the subdirectories

This CMake scripts contains only the command `add_subdirectory()` which adds a subdirectory to the build.

## 3. The CMake library file

The statistics library separate their code in the implementation detail (`DescriptiveStatistics.cpp`) and its header (`DescriptiveStatistics.cpp`). The library is compiled as a _cmake object library_. An Object Library is a collection of source files compiled into an object file which is not linked into a library file or made into an archive.

## 4. The CMake Application file

It just simply create the executable target using the `add_executable()` command and link the executable target to the statistic object library target.
