#include "Fibonacci.hpp"
#include <iostream>
#include <gtest/gtest.h>

class TestFibonacci : public ::testing::TestWithParam< std::pair<ullong, ullong> > { };

TEST_P(TestFibonacci, checkFibonacciReturnsExpectedResult) {
    ullong n = std::get<0>(GetParam());
    ullong expected_result = std::get<1>(GetParam());

    ASSERT_EQ(expected_result, fibonacci(n));
}

INSTANTIATE_TEST_SUITE_P(ParameterizedTest,
                         TestFibonacci,
                         ::testing::Values(
                             std::make_pair(1,1),
                             std::make_pair(2,1),
                             std::make_pair(3,2),
                             std::make_pair(4,3),
                             std::make_pair(5,5),
                             std::make_pair(40,102334155),
                             std::make_pair(50, 12586269025),
                             std::make_pair(90, 2880067194370816120)
                             )
                         );