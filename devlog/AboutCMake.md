# About CMake

CMake is an orchestrator of the building process. It is based on three main stages:

1. The configuration: read and load the CMake instructions;
2. The generation: generate Makefiles or project files;
3. The building: compile, link, test, and generate packages.

The `cmake -B <source_build> -S <source_folder>` command will generate a buildsystem in the `<build_folder>` directory (or create it if it's missing) from the source in the `<source_folder>` directory. In simple words, it performs stage 1 and stage 2.

After generating our build tree, we're ready for the third stage: running the builder tool. This in the simple cases can be done using the command `cmake --build <source_build>`.

## Reference

- Modern CMake C++ book
- [The cmake blog articels by Martin Bond](https://blog.feabhas.com/2021/07/cmake-part-1-the-dark-arts/)
