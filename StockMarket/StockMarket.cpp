// Start from the end
// for at position i:
// - Find the max from the list i+1 ... n
// - calculate the profit. 
// - Update the max profit.

// Base case:
// i == n:
// max_profit = 0
// max value = v[i]
// 

#include <vector>
#include <algorithm>

// Computation O(n), memory O(1)
int StockMarket(const std::vector<int> prices) {
    int max_profit  = 0;
    int max_value = 0;

    for (int i = prices.size() - 1; i >= 0; --i) {
        max_profit = std::max(max_profit,  max_value - prices[i]);
        max_value = std::max(max_value, prices[i]);
    }

    return max_profit;
}
