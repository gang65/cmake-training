## Compile source code and create `multiple.a` [static library](https://en.wikipedia.org/wiki/Static_library):
```
  $ cd build
  $ cmake ..
  $ cmake --build .
  $ cmake --build . --target install
```
2. To run application type command:

```
table
```
## Tasks

1. Check type of `multiple/multiple.a`.

```
  $ file multiple/multiple.a
libmultiple.a: current ar archive random library
```
It is `.ar` archive which all `.o` object files.

2. Extract `.a` file by using command:
```
  $ ar -x multiple/multiple.a
```
Notice that static library contains compressed `.o` object files.

3. Adding new library to project

* Write function `int factorial(int number)` which will return value of [factorial](https://en.wikipedia.org/wiki/Factorial), in `factorial` directory.

* Create `CMakeLists.txt` in `factorial` directory, and compile it as `STATIC` library.

* Adopt `table.cpp` source code to display first 10 result of factorial.
