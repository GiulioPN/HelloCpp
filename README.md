# Hello Cpp

Hello Cpp is simple C++ project template. The goal of the Hello Cpp project consists to give a C++ template project where an application and a library are definited. Therefore, the next steps are:

- Add the testing module
- Add the CMakePrests.txt to simplify the generation and build commands
- Add the documentation module

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

## Others

### Clang Format

The ClangFormat describes a set of tools based on the LibFormat, which is a library that implements automatic source code formatting based on Clang. Thorugh the `clang-format` command and the `.clang-format` file is possible format the C++ code.

To install the commad simply `sudo apt-get install clang-format` in linux like system.
