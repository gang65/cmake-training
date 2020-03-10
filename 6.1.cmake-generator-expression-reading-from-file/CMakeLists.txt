cmake_minimum_required (VERSION 3.5)

# Sets project details such as name, version, etc. and enables languages.
# Sets the name of the project and stores the name in the PROJECT_NAME variable.
# Additionally this sets variables:
# PROJECT_SOURCE_DIR, <PROJECT-NAME>_SOURCE_DIR, PROJECT_BINARY_DIR, <PROJECT-NAME>_BINARY_DIR
project(table)


set(GENEX_REVISION_FILE "${CMAKE_CURRENT_SOURCE_DIR}/version.txt")
set(LOCAL_OUTPUT_FILE "${CMAKE_CURRENT_BINARY_DIR}/version-extracted.txt")
set(VERSION_NAME "$<$<NOT:$<STREQUAL:${GENEX_REVISION_FILE},${EMPTY_STRING}>>:versionName=$(head -1 ${GENEX_REVISION_FILE} | cut -d = -f 2)>")

# adds a custom command which is dependent from input and output file
# If ${LOCAL_OUTPUT_FILE} file will not exists or input file GENEX_REVISION_FILE will check_dependencies_changed
# the command will be invoked
add_custom_command(OUTPUT ${LOCAL_OUTPUT_FILE}
                   # cmake has build-in commands for managing files. It is recommended to use these commands instead of system ones, because it is cross platform
                   COMMAND bash -c "${CMAKE_COMMAND} -E echo Extracted version is ${VERSION_NAME}"
                   COMMAND bash -c "${CMAKE_COMMAND} -E echo Extracted version is ${VERSION_NAME}" > ${LOCAL_OUTPUT_FILE}
                   # Generator expressions are evaluated during build system generation to produce information specific to each build configuration.
                   COMMENT "This comment will be displayed during build. Generator expression output will be not known: $<TARGET_FILE:${PROJECT_NAME}>"
                   DEPENDS ${GENEX_REVISION_FILE}
                   VERBATIM
                 )

add_custom_target(version_extraction DEPENDS ${LOCAL_OUTPUT_FILE})

# Specify the directory in which the source CMakeLists.txt and code files are located.
add_subdirectory(multiple)

# Add the given directories to those the compiler uses to search for include files.
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/multiple)

# Adds an executable target called ${PROJECT_NAME} to be built from the source files listed in the command invocation.
add_executable(${PROJECT_NAME} table.cpp)

# Add dependency. `version_extraction` target will be invoked before table
add_dependencies(${PROJECT_NAME} version_extraction)

# Specify libraries or flags to use when linking a given target and/or its dependents.
target_link_libraries(${PROJECT_NAME} multiple)
