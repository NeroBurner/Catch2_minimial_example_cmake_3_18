#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

// external libraries in this repository
#include <catch2/catch.hpp>

// standard libraries

TEST_CASE("all is good")
{
    REQUIRE(true);
}