// 020-TestCase-2.cpp
// Source: https://github.com/catchorg/Catch2/blob/master/examples/020-TestCase-2.cpp

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"


TEST_CASE( "First test", "[multi-file:2]" ) {
    REQUIRE( f(4) == 17);
}

TEST_CASE( "Second test", "[multi-file:2]" ) {
    REQUIRE( f(5) == 26 );
}
