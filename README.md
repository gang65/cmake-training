# Cmake Tutorial

## Prerequisites

To be able to compile example projects you need to install compiler, `cmake` and `ninja`:

### Installing on Ubuntu
```
$ sudo apt install build-essential cmake ninja-build
```

### Installing on macOS
```
$ xcode-select --install
$ ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
$ brew install cmake
$ brew install ninja
```

## 0. Building source code without build system

  In directory [`0.source-single`](0.source-single) there is single C++ file. It demonstrate how compilation looks like.

  Directory with multiple C++ files is available at [`0.source-multiple`](0.source-multiple)

## Building with CMake

### 1. Building executable

  You will learn:
  * Creating CMake [project](https://cmake.org/cmake/help/latest/command/project.html#command:project)
  * Building executable from source by using [add_executable](https://cmake.org/cmake/help/latest/command/add_executable.html) command
  * Configure installation process by using [install](https://cmake.org/cmake/help/latest/command/install.html) command

  Directory with example project: [`1.cmake-add_executable`](1.cmake-add_executable)

### 2. Building executable and static library

  You will learn:
  * How to specify the directory in which the source CMakeLists.txt and code files are located by using [add_subdirectory](https://cmake.org/cmake/help/latest/command/add_subdirectory.html) command.
  * Provide directories used for including source code during compilation, by using [include_directories](https://cmake.org/cmake/help/latest/command/include_directories.html)
  * Specify libraries which are required to link specific target, by using [target_link_libraries](https://cmake.org/cmake/help/latest/command/target_link_libraries.html)
  * Create [static library](https://en.wikipedia.org/wiki/Static_library), by using  [add_library](https://cmake.org/cmake/help/latest/command/add_library.html)

  Directory with example project: [`2.cmake-add_library-static`](2.cmake-add_library-static)

### 3. Building executable and shared library

  You will learn:
  * How to create [shared library](https://en.wikipedia.org/wiki/Library_(computing)#Shared_libraries), by using command: [add_library](https://cmake.org/cmake/help/latest/command/add_library.html)

  Directory with example project: [`3.cmake-add_library-shared`](3.cmake-add_library-shared)

### 4. Additional command invoked during building of specific target

  You will learn:
  * How to add custom command, during building specific target, by using command [add_custom_command](https://cmake.org/cmake/help/latest/command/add_custom_command.html)
  * How to use CMake's platform independent [Command line tools](https://cmake.org/cmake/help/latest/manual/cmake.1.html?highlight=copy#command-line-tool-mode), invoked by command `cmake -E <command>`

  Directory with example project: [`4.cmake-add_custom_command`](4.cmake-add_custom_command)

### 5. Creating custom target and attaching commands to it

  You will learn:
  * How to add custom target and attach corresponding action to it [add_custom_target](https://cmake.org/cmake/help/latest/command/add_custom_target.html)
  * How to use change execution order of targets with [add_dependencies](https://cmake.org/cmake/help/v3.8/command/add_dependencies.html),

  Directory with example project: [`5.cmake-add_custom_target`](5.cmake-add_custom_target)

### 6. Use Generator Expression to modify binaries during build

  You will learn:
  * How to get informations about selected target during build time, by using [Generator expression](https://cmake.org/cmake/help/latest/manual/cmake-generator-expressions.7.html).

  Directory with example project: [`6.cmake-generator-expression`](6.cmake-generator-expression)

### 7. Copy file during generation phase

  You will learn:
  * How to [create directory](https://cmake.org/cmake/help/latest/command/file.html#make-directory), [copy file](https://cmake.org/cmake/help/latest/command/file.html#copy) and [download file ](https://cmake.org/cmake/help/latest/command/file.html#download) during generation phase.

  Directory with example project: [`7.cmake-file-copy`](7.cmake-file-copy)
