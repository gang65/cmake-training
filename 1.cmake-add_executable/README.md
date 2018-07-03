## Compile source code and create `table` executable:

  * Enter `build` directory (build artifacts are separated from source code):
```
  $ cd build
```
  * Run CMake generation of build files. For Linux `Unix Makefiles` generator will be used by default:
```
  $ cmake ..
```
  * Start build by using generator independent CMake command:
```
  $ cmake --build .
```
  * By default CMake `install` target will be created. After invoking `install` target, the application will be installed in `/usr/local` directory :
```
  $ sudo cmake --build . --target install
```
  * Run application:
```
  $ table
```

### Tasks

1. Compile generated project by using `make`
  ```
  $ cd build
  $ rm -rf *
  $ cmake ..
  $ make
  $ sudo make install
  $ table
  ```

2. Generate CMake project by using `Ninja` generator. `Ninja generator` is much more efficient in rebuild process, because during standard build, it marks object files which don't need to be rebuild. As a result it knows which objects were already compiled.

  ```
  $ mkdir build-ninja
  $ cd build-ninja
  $ cmake .. -G Ninja
  $ cmake --build .
  ```
