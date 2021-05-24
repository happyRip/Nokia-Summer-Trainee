#include "../include/utils.hpp"
#include "../include/calc.hpp"
#include <gtest/gtest.h>

TEST(calc_test, isNumber) {
    char aNumber[4] = {'7', '7', '7', '\0'};
    char aWord[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};

    bool expected = true;
    bool got = isNumber(aNumber);
    EXPECT_EQ(expected, got);

    expected = false;
    got = isNumber(aWord);
    EXPECT_EQ(expected, got);
}

TEST(calc_test, isOperator) {
    char operators[4][2] = {{'+', '\0'},
                            {'-', '\0'},
                            {'x', '\0'},
                            {':', '\0'}};
    bool got;
    bool expected = true;
    for (int i = 0; i < 4; i++) {
        got = isOperator(operators[i]);
        EXPECT_EQ(expected, got) << "\ti = " << i << "\n\tinput = " << operators[i][0];
    }

    char aWord[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
    expected = false;
    got = isOperator(aWord);
    EXPECT_EQ(expected, got) << "\tinput = " << aWord;
}