add_library(median_lib STATIC median.cpp median.h)
target_include_directories(median_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
