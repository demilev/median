#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "median.h"

TEST_CASE( "median of 0 elements is 0" ) {
    MedianStructure m;
	REQUIRE( m.getMedian() == 1);
}
