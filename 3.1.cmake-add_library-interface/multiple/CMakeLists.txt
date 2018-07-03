project(multiple)

# Generate the shared library from the sources
add_library(${PROJECT_NAME} SHARED multiple.cpp)

#set_target_properties(${PROJECT_NAME} PROPERTIES
#  PUBLIC_HEADER multiple.hpp
#)
#install(TARGETS ${PROJECT_NAME} DESTINATION /usr/local/bin)


add_library(interfacelib SHARED multiple.cpp)

set_target_properties(interfacelib PROPERTIES
  PUBLIC_HEADER multiple.hpp
)
install(TARGETS interfacelib DESTINATION /usr/local/bin)
