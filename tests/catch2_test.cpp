#undef TEST_CASE
#include <catch2/catch_test_macros.hpp>
#include <lib/math.hpp>

TEST_CASE("AddOneTest", "lib")
{
    REQUIRE(lib::AddOne(0) == 1);
    REQUIRE(lib::AddOne(1) == 2);
    REQUIRE(lib::AddOne(2) == 3);
    REQUIRE(lib::AddOne(2) == 5);
}

TEST_CASE("MultiplyByTest", "lib")
{
    REQUIRE(lib::MultiplyByTwo(0) == 0);
    REQUIRE(lib::MultiplyByTwo(1) == 2);
    REQUIRE(lib::MultiplyByTwo(2) == 4);
    REQUIRE(lib::MultiplyByTwo(2) == 10);
}
#undef TEST_CASE
