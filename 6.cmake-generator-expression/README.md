1. To compile source code and create `table` executable, type command:
```
cd build
cmake ..
cmake --build .
```
  Check the output of the comments. Notice generator expression from `COMMENT <comment>` was not replaced with corresponding library name. The generator expression from `${CMAKE_COMMAND} -E echo <comment>` was replaced with proper library name.

2. To run application type command:

```
./table
```


## Tasks

1. Strip [shared library](https://en.wikipedia.org/wiki/Library_(computing)#Shared_libraries) created by target `multiple`, with command `strip <library name>` to library `<library name>.stripped`. Use `add_custom_command` for that purpose.

2. When you delete the file `<library name>`, and you run build, the library will be regenerated. Unfortunately when you will delete `<library name>.stripped`, after rebuild it will not be rebuilded.
Modify stripping `strip <library name>`, to regenerate `<library name>.stripped` file after it's deletion.
