1. To compile source code and create `table` executable, type command:
```
cd build
cmake ..
cmake --build .
```
  Check the output of the comments.
```
Extracted version is versionName=15.20.27
```
If you rerun the build command, the generator will not be invoked:
```
cmake --build .
```
If you delete the output file, `version_extraction` target will be invoked:
```
version-extracted.txt
cmake --build .
```
Also `version_extraction` target will be invoked if you modify `version.txt` file:
```
touch ../version.txt
cmake --build .
```

## Tasks

1.
