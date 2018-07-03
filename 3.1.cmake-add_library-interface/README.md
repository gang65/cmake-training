## Compile source code and create `multiple.dylib` [shared library](https://en.wikipedia.org/wiki/Static_library):

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

1. Notice that for Ubuntu `multiple.so` file was created.
Display information about file, by typing `file <file name>`:
```
$ file libmultiple.dylib
libmultiple.dylib: Mach-O 64-bit dynamically linked shared library x86_64
```

2. Install application by running command:
```
sudo cmake --build . --target install
```
* Run application with command:
```
/usr/local/bin/table
```
Notice that the application is not running (missing library).
Fix `CMakeLists.txt`, to be able to run application by installing it to `/usr/lib`.
