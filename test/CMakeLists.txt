
project(FastLoggerTest)
set(CMAKE_PREFIX_PATH "../install")

find_package(FastLogger REQUIRED)

add_executable(test_fast_logger test.cpp)

target_link_libraries(test_fast_logger FastLogger)

target_include_directories(test_fast_logger PRIVATE ../install/include)
