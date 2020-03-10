
# Sets project details such as name, version, etc. and enables languages.
# Sets the name of the project and stores the name in the PROJECT_NAME variable.
# Additionally this sets variables:
# PROJECT_SOURCE_DIR, <PROJECT-NAME>_SOURCE_DIR, PROJECT_BINARY_DIR, <PROJECT-NAME>_BINARY_DIR
project("")

cmake_minimum_required (VERSION 3.14)

# Language-specific built-in variables, such as CMAKE_CXX_COMPILER, CMAKE_CXX_COMPILER_ID etc are set by invoking the project() command.
# If no project command is in the top-level CMakeLists file, one will be implicitly generated. By default the enabled languages are C and CXX
#set(CMAKE_C_COMPILER clang)
#set(CMAKE_CXX_COMPILER clang)

# Specify the directory in which the source CMakeLists.txt and code files are located.
add_subdirectory(multiple)

# Add the given directories to those the compiler uses to search for include files.
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/multiple)

# Adds an executable target called ${PROJECT_NAME} to be built from the source files listed in the command invocation.
add_executable(${PROJECT_NAME} table.cpp)

# Specify libraries or flags to use when linking a given target and/or its dependents.
target_link_libraries(${PROJECT_NAME} multiple)

# This command generates installation rules for a project.
# Rules specified by calls to this command within a source directory are executed in order during installation.
install(TARGETS ${PROJECT_NAME} DESTINATION /usr/local/bin)

# During installation phase (eg. "make install") copy README.md file to specific directory
install(FILES README.md DESTINATION /usr/local/doc)
