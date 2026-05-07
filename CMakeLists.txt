cmake_minimum_required(VERSION 3.16)

project(TwoSum LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(twosum_tests
    src/twosum.cpp
)

target_compile_options(twosum_tests PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall -Wextra -Wpedantic>
    $<$<CXX_COMPILER_ID:MSVC>:/W4>
)

enable_testing()

add_test(NAME twosum_tests COMMAND twosum_tests)
