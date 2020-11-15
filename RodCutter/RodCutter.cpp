#include "RodCutter.hpp"
#include <algorithm>
#include <iostream>

void computeNumWaysWithMaxValue(const std::vector<int> & prices,
                                const std::vector<int> & values) {
    std::vector<int>num_maximums(prices.size(), 0);
    num_maximums[0] = 1;
    int num_ways = 0;
    for (int i = 1; i < prices.size(); i++) {
        int max_price = 0;
        
        for (int j = 1; j <= i; j++) {
            max_price = prices[j] + values[i - j];
            if (max_price == values[i]) {
                num_maximums[i] += num_maximums[i - j];
            }
        }
    }
    std::cout << "== Number of ways with max value: " << num_maximums[prices.size()-1] << std::endl;
}

// Computation O(n^2), space O(n)
int RodCutter(const std::vector<int> & prices) {

    std::vector<int>values(prices.size(), 0);

    for (int i = 1; i < prices.size(); i++) {
        int max_price = 0;

        for (int j = 1; j <= i; j++) {
            max_price = std::max(max_price, prices[j] + values[i - j]);
        }
        values[i] = max_price;
    }

    // Compute number of ways with maximum value
    computeNumWaysWithMaxValue(prices, values);
    int total_value = values[prices.size() - 1];
    return total_value;
}
