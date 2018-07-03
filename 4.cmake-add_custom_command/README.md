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

1. Compress `README.md` file with `tar` archiver (taken from [command `cmake -E tar`](https://cmake.org/cmake/help/latest/manual/cmake.1.html?highlight=copy#command-line-tool-mode)) in separate `add_custom_command` in `multiple` target.
   Execute `multiple` target and check if `README.md` file was compressed.
