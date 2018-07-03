## Copy README.md file during generation phase:

  * Enter `build` directory (build artifacts are separated from source code):
```
  $ cd build
```
  * Run CMake generation of build files:
```
  $ cmake ..
  $ less file-created-during-generation/README.md
```
  * Check if directory `file-created-during-generation` was created and `README.md` file was copied into it. If `README.md` file will be changed and generation will be invoked, the `README.md` file will be overridden.

### Tasks

1. Modify `README.md` file, run CMake generation and check if file in `file-created-during-generation` directory was updated.
```
  $ nano ../README.md
  $ cmake ..
  $ less file-created-during-generation/README.md
```

2. Update `CMakeLists.txt`, to download `Ninja` generator source code from [Ninja website](https://github.com/ninja-build/ninja/archive/v1.8.2.zip), with command [file DOWNLOAD](https://cmake.org/cmake/help/latest/command/file.html#download) <url> <file>. After downloading uncompress it (eg. with `cmake -E tar xf v1.8.2.zip` command) and place in directory `${CMAKE_CURRENT_BINARY_DIR}/ninja`
