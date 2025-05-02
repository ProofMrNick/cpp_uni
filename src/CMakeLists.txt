cmake_minimum_required(VERSION 3.2...3.27.5)

project(cpp_uni_single)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(oop_practice)
add_subdirectory(unit_test_example)

set(CMAKE_SUPPRESS_REGENERATION true)
