# Hello Cpp

Hello Cpp is simple C++ project template. The goals of the project are to create a C++ template that:

- Use CMake as C++ building system tool
- Use an external library. In this case we will use the C++ boost library
- Set a clang-format
- Set a testing module
- Set the vscode settings

## Build and Run

```bash
cd HelloCpp
mkdir build
```

Then

```bash
cmake -B build -S .
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

## Clang Format

The ClangFormat describes a set of tools based on the LibFormat, which is a library that implements automatic source code formatting based on Clang. Thorugh the `clang-format` command and the `.clang-format` file is possible format the C++ code.

To install the commad simply `sudo apt-get install clang-format` in linux like system.

## Boost installation

In order to use the boost library we have to downolad the library and install it locally. From the [official instructions](https://www.boost.org/doc/libs/1_84_0/more/getting_started/unix-variants.html), it is possible to find all the information to use the boost library.
