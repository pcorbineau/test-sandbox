#include <gtest/gtest.h>
#include <lib/math.hpp>

TEST(lib, AddOneTest)
{
    EXPECT_EQ(lib::AddOne(0), 1);
    EXPECT_EQ(lib::AddOne(1), 2);
    EXPECT_EQ(lib::AddOne(2), 3);
    EXPECT_EQ(lib::AddOne(2), 5);
}

TEST(lib, MultiplyByTwoTest)
{
    EXPECT_EQ(lib::MultiplyByTwo(0), 0);
    EXPECT_EQ(lib::MultiplyByTwo(1), 2);
    EXPECT_EQ(lib::MultiplyByTwo(2), 4);
    EXPECT_EQ(lib::MultiplyByTwo(2), 10);
}
