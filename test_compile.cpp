#define CATCH_CONFIG_MAIN
#include "catch2/single_include/catch2/catch.hpp"

TEST_CASE("Compile Stuff")
{
    int a = 0;
    int b = 1;
    REQUIRE(a != b);
}
