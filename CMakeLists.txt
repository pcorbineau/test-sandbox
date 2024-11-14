cmake_minimum_required(VERSION 3.15)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(test-sandbox)

add_subdirectory(lib)

include(CTest)
enable_testing()
add_subdirectory(tests)
