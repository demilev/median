project(median_tests)

add_executable(tests testmain.cpp)
target_link_libraries(tests PRIVATE median_lib catch)

enable_testing()
add_test(NAME MedianTest COMMAND median_test)