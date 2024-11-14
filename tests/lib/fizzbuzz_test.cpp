#include <gtest/gtest.h>
#include <lib/fizzbuzz.hpp>

TEST_CASE("fizzbuzz", "lib")
{
    REQUIRE(lib::Fizzbuzz(-1).error() == "n must be non-negative");
    REQUIRE(*lib::Fizzbuzz(1) == "1");
    REQUIRE(*lib::Fizzbuzz(2) == "2");
    REQUIRE(*lib::Fizzbuzz(3) == "fizz");
    REQUIRE(*lib::Fizzbuzz(4) == "4");
    REQUIRE(*lib::Fizzbuzz(5) == "buzz");
    REQUIRE(*lib::Fizzbuzz(6) == "fizz");
    REQUIRE(*lib::Fizzbuzz(7) == "7");
    REQUIRE(*lib::Fizzbuzz(8) == "8");
    REQUIRE(*lib::Fizzbuzz(9) == "fizz");
    REQUIRE(*lib::Fizzbuzz(10) == "buzz");
    REQUIRE(*lib::Fizzbuzz(11) == "11");
    REQUIRE(*lib::Fizzbuzz(12) == "fizz");
    REQUIRE(*lib::Fizzbuzz(13) == "13");
    REQUIRE(*lib::Fizzbuzz(14) == "14");
    REQUIRE(*lib::Fizzbuzz(15) == "fizzbuzz");
}
