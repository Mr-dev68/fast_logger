cmake_minimum_required(VERSION 3.10)
project(handler)
add_subdirectory(src)
option(TEST "activate test" OFF)
if (TEST)
add_subdirectory(test)
endif()

