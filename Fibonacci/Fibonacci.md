### Problem ###
Fibonacci of number __*n*__ is given as a sum of fibonacci of __*n-1*__ and __*n-2*__. Furthermore, fibonacci of __*1*__ `=` fibonacci of __*2*__ `=` `1`.

Write a C++ program to calculate the fibonacci of number __*n*__.

### Solution design

* `fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)`
* `f(2) = 1`
* `f(1) = 1`

```
f(n) = f(n-1) + f(n-2)
     = f(n-2) + f(n-3) + f(n-3) + f(n-4)
     = ...
```