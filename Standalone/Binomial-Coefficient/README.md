# Binomial Coefficient

## Problem

Calculate the binomial coefficient C(n, r) which represents the number of ways to choose r items from n items without replacement and without regard to order.

The binomial coefficient is calculated using the formula:
$$C(n, r) = \frac{n!}{r!(n-r)!}$$

### Input Format
- Two space-separated integers `n` and `r`
  - `n`: Total number of items
  - `r`: Number of items to choose

### Output Format
- A single integer representing the binomial coefficient C(n, r)

### Sample Input
```
5 2
```

### Sample Output
```
10
```

### Explanation
C(5, 2) = 5! / (2! × 3!) = 120 / (2 × 6) = 10

## Solution

**Language:** C++

```cpp
#include <iostream>
int factorial(int n){
    if (n==0 || n==1) return 1;
    else{
        return n*factorial(n-1);
    }
}
int main() {
    int n,r;
    std::cin>>n>>r;
    int bin=factorial(n)/(factorial(r)*factorial(n-r));
    std::cout<<bin;
}
```

### Approach
The solution uses the factorial function to calculate:
1. n! (factorial of n)
2. r! (factorial of r)
3. (n-r)! (factorial of n-r)

Then applies the binomial coefficient formula: C(n, r) = n! / (r! × (n-r)!)

### Time Complexity
- O(n) for calculating factorials

### Space Complexity
- O(n) for recursive call stack
