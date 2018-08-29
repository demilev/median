#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "median.h"

TEST_CASE("median of 0 numbers is 0") {
    MedianStructure m;
	REQUIRE(m.getMedian() == 0);
}

TEST_CASE("median of 1 number is the number itself") {
    MedianStructure m;
    m.insert(5);
	REQUIRE(m.getMedian() == 5);
}

TEST_CASE("median of even number of numbers is the average of the two middle elements") {
    MedianStructure m;
    m.insert(4).insert(3).insert(5).insert(9).insert(12).insert(13);
	REQUIRE(m.getMedian() == 7);
}

TEST_CASE("median of odd number of numbers is the middle element") {
    MedianStructure m;
    m.insert(4).insert(3).insert(5);
	REQUIRE(m.getMedian() == 4);
}

SCENARIO("median changes on insertion") {
    GIVEN("a median structure with some items"){
        MedianStructure m;
        m.insert(4).insert(3).insert(5).insert(9).insert(12);    	
        REQUIRE(m.getMedian() == 5);
        
        WHEN("a new element is inserted") {
            m.insert(13);
            THEN("the median changes") {
                REQUIRE(m.getMedian() == 7);
            }   
        }
    }
}
