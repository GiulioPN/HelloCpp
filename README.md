# Hello Cpp

Hello Cpp is simple C++ project template. The goals of the project are to create a C++ template that:

- Use CMake as C++ building system tool
- Use an external library. In this case we will use the C++ boost library
- Set a clang-format
- Set a testing module
- Set the vscode settings

## Boost installation

In order to use the boost library we have to downolad the library and install it locally. From the [official instructions](https://www.boost.org/doc/libs/1_84_0/more/getting_started/unix-variants.html), it is possible to find all the information to use the boost library.

## Build and Run

```bash
cd HelloCpp
mkdir build
```

Then

```bash
cmake -B build -S .
cmake --build build
```

Finally, to execute the target

```bash
./build/bin/HelloCpp
```

## About CMake

CMake is an orchestrator of the building process. It is based on three main stages:

1. The configuration: read and load the CMake instructions;
2. The generation: generate Makefiles or project files;
3. The building: compile, link, test, and generate packages.

The `cmake -B <source_build> -S <source_folder>` command will generate a buildsystem in the `<build_folder>` directory (or create it if it's missing) from the source in the `<source_folder>` directory. In simple words, it performs stage 1 and stage 2.

After generating our build tree, we're ready for the third stage: running the builder tool. This in the simple cases can be done using the command `cmake --build <source_build>`.

## Project structure

The goal of the Hello Cpp project consists to give a C++ template project where an application and a library are definited.

Following the structure of the project:

```bash
HelloCpp
    ├── CMakeLists.txt (1)
    ├── README.md
    └── src
        ├── appsrc
        │   ├── CMakeLists.txt 
        │   └── HelloCpp
        │       ├── CMakeLists.txt
        │       └── HelloCpp.cpp
        ├── CMakeLists.txt
        └── libsrc
            ├── CMakeLists.txt
            └── Statistics
                ├── CMakeLists.txt
                └── include
                    └── Statistics
                        └── DescriptiveStatistics.hpp
```

The main entities that characterize the `HelloCpp` project are:

- The CMakeLists.txt (1) is the project cmake file with the project instruction.
- The HelloCp dummy app in the `src/appsrc` directory
- The Statistics dummy library in the `src/libsrc` directory. It is an header-only library, and for this reason it is defined as a _cmake interface library target_. This means that it does not compile sources and does not produce a library artifact on disk.

## Clang Format

The ClangFormat describes a set of tools based on the LibFormat, which is a library that implements automatic source code formatting based on Clang. Thorugh the `clang-format` command and the `.clang-format` file is possible format the C++ code.

To install the commad simply `sudo apt-get install clang-format` in linux like system.
