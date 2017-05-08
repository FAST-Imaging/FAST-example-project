cmake_minimum_required(VERSION 2.8.10)
project("FAST example project")

find_package(FAST REQUIRED)

# Enable C++ 11
set(CMAKE_CXX_STANDARD 11)

# Get rid of Qt error with position independent code
if(${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
    add_definitions("-fPIC") 
endif()

include_directories(${FAST_INCLUDE_DIRS})
link_directories(${FAST_LIBRARY_DIRS})

add_executable(example main.cpp)
target_link_libraries(example ${FAST_LIBRARIES})
