#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include <lib/math.hpp>

TEST_CASE("AddOneTest")
{
    CHECK(lib::AddOne(0) == 1);
    CHECK(lib::AddOne(1) == 2);
    CHECK(lib::AddOne(2) == 3);
    CHECK(lib::AddOne(2) == 5);
}

TEST_CASE("MultiplyByTwoTest")
{
    CHECK(lib::MultiplyByTwo(0) == 0);
    CHECK(lib::MultiplyByTwo(1) == 2);
    CHECK(lib::MultiplyByTwo(2) == 4);
    CHECK(lib::MultiplyByTwo(2) == 5);
}
