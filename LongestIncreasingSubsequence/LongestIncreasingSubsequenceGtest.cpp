#include "LongestIncreasingSubsequence.hpp"
#include <iostream>
#include <gtest/gtest.h>

using price_value_pair = std::pair<std::vector<int>, int>;

class TestLongestIncreasingSubsequence : public ::testing::TestWithParam< price_value_pair > { };

TEST_P(TestLongestIncreasingSubsequence, checkLongestIncreasingSubsequenceReturnsExpectedResult) {
    auto prices = std::get<0>(GetParam());
    auto total_value = std::get<1>(GetParam());

    std::vector<int> a = longestIncreasingSubsequence(prices);

    for (auto & x : a) {
        std::cout << x << ", ";
    }
    std::cout << std::endl;

    //ASSERT_EQ(total_value, longestIncreasingSubsequence(prices));
}

INSTANTIATE_TEST_SUITE_P(ParameterizedTest, TestLongestIncreasingSubsequence,
    ::testing::Values(
        std::make_pair(std::vector<int>{0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15}, 6),
        std::make_pair(std::vector<int>{10, 22, 9, 33, 21, 50, 41, 60, 80}, 6),
        std::make_pair(std::vector<int>{0, 300,301,1}, 900),
        std::make_pair(std::vector<int>{0, 300,301,4}, 900),
        std::make_pair(std::vector<int>{0, 2, 4, 7, 8}, 9),
        std::make_pair(std::vector<int>{0, 2, 4, 6, 8, 9}, 10) 
    )
);