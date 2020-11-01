#include "Fibonacci.hpp"

#include <iostream>
#include <vector>

// Solution with O(n) computation, O(1) memory
ullong fibonacci(ullong n)
{
    ullong fibs1 = 1;
    ullong fibs2 = 1;
    ullong fibsn = fibs2;

    for (ullong i = 3; i <= n; ++i) {
        fibsn = fibs2 + fibs1;
        fibs1 = fibs2;
        fibs2 = fibsn;
    }
    return fibsn;
}

// Solution with O(2^n) computation complexity
/*ullong fibonacci(ullong n)
{
    if (n <= 2) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}*/

// Solution with O(n) computation, O(n) memory
/*ullong fibonacci(ullong n)
{
    std::vector<ullong>fibs(n+1, 0);

    fibs[1] = 1;
    fibs[2] = 1;
    for (ullong i = 3; i <= n; ++i) {
        fibs[i] = fibs[i-1] + fibs[i-2];
    }
    return fibs[n];
}*/