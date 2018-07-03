1. To compile source code and create `table` executable, type command:
```
cd build
cmake ..
cmake --build .
```
2. To run application type command:

```
./table
```

## Tasks

1. Change order of compilation. `COPY_FILES_TARGET` target should be build before `multiple` target.

2. Disable building `COPY_FILES_TARGET` target by default. Build target `COPY_FILES_TARGET` manually.

3. Read documentation about [add_custom_target](https://cmake.org/cmake/help/latest/command/add_custom_target.html), [add_custom_command](https://cmake.org/cmake/help/latest/command/add_custom_command.html) and create `COPY_FILES_TARGET` independent from output files.
