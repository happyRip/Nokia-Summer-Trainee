#include "../Example.hpp"
#include <gtest/gtest.h>

struct ExampleTests 
    : public::testing::Test
{
    int x;

    virtual void SetUp() override {

    }

    virtual void TearDown() override {
        
    }
};


TEST(ExampleTests, MAC) {
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldSum = 100;
    int expectedNewSum = oldSum + x * y;

    EXPECT_EQ(
        expectedNewSum,
        MAC(x, y, sum)
    );

    EXPECT_EQ(
        expectedNewSum,
        sum
    );
}

TEST(ExampleTests, Square) {
    int x = 5;
    int expectedSquare = x * x;

    EXPECT_EQ(
        expectedSquare,
        square(x)
    );
}