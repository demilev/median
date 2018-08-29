cmake_minimum_required(VERSION 3.5)

project(MedianDataStructure)
if (MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(thirdparty/catch)
add_subdirectory(src)
add_subdirectory(test)

enable_testing()
add_test(NAME MedianTests COMMAND Tests)
