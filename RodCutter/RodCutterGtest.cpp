#include "RodCutter.hpp"
#include <iostream>
#include <gtest/gtest.h>

using price_value_pair = std::pair<std::vector<int>, int>;

class TestRodCutter : public ::testing::TestWithParam< price_value_pair > { };

TEST_P(TestRodCutter, checkRodCutterReturnsExpectedResult) {
    auto prices = std::get<0>(GetParam());
    auto total_value = std::get<1>(GetParam());

    ASSERT_EQ(total_value, RodCutter(prices));
}

INSTANTIATE_TEST_SUITE_P(ParameterizedTest, TestRodCutter,
    ::testing::Values(
        std::make_pair(std::vector<int>{0, 1}, 1),
        std::make_pair(std::vector<int>{0, 1,2}, 2),
        std::make_pair(std::vector<int>{0, 300,301,600}, 900),
        std::make_pair(std::vector<int>{0, 300,301,600}, 900),
        std::make_pair(std::vector<int>{0, 2, 4, 7, 8}, 9),
        std::make_pair(std::vector<int>{0, 2, 4, 6, 8, 9}, 10) 
    )
);