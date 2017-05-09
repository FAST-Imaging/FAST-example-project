cmake_minimum_required(VERSION 2.8.10)
project("FAST example project")

find_package(FAST REQUIRED)

include(${FAST_USE_FILE})

add_executable(example main.cpp)
target_link_libraries(example ${FAST_LIBRARIES})
