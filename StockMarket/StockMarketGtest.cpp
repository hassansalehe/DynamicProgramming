#include "StockMarket.hpp"

#include <iostream>
#include <gtest/gtest.h>

using price_value_pair = std::pair<std::vector<int>, int>;

class TestStockMarket : public ::testing::TestWithParam< price_value_pair > { };

TEST_P(TestStockMarket, checkStockMarketReturnsExpectedResult) {
    auto prices = std::get<0>(GetParam());
    auto total_value = std::get<1>(GetParam());

    ASSERT_EQ(total_value, StockMarket(prices));
}

INSTANTIATE_TEST_SUITE_P(ParameterizedTest, TestStockMarket,
    ::testing::Values(
        std::make_pair(std::vector<int>{0, 1}, 1),
        std::make_pair(std::vector<int>{0, 1,2}, 2),
        std::make_pair(std::vector<int>{300,301,600}, 300),
        std::make_pair(std::vector<int>{300,201,600}, 399),
        std::make_pair(std::vector<int>{2, 4, 7, 1}, 5),
        std::make_pair(std::vector<int>{8,1,2,4,6,3}, 5) 
    )
);