cmake_minimum_required (VERSION 3.5)

# Sets project details such as name, version, etc. and enables languages.
# Sets the name of the project and stores the name in the PROJECT_NAME variable.
# Additionally this sets variables:
# PROJECT_SOURCE_DIR, <PROJECT-NAME>_SOURCE_DIR, PROJECT_BINARY_DIR, <PROJECT-NAME>_BINARY_DIR
project(table)

# Adds an executable target called ${PROJECT_NAME} to be built from the source files listed in the command invocation.
add_executable(${PROJECT_NAME} table.cpp)

# This command generates installation rules for a project.
# Rules specified by calls to this command within a source directory are executed in order during installation.
install(TARGETS ${PROJECT_NAME} DESTINATION /usr/local/bin)

# During installation phase (eg. "make install") copy README.md file to specific directory
install(FILES README.md DESTINATION /usr/local/doc)
