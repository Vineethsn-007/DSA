# Binary to Decimal Conversion

## Problem

Convert a binary (base 2) number to its decimal (base 10) equivalent without using built-in conversion functions.

The decimal value is obtained by multiplying each bit by its corresponding power of 2 and summing all the results.

### Input Format
- A single integer representing a binary number

### Output Format
- A single integer representing the decimal equivalent of the binary number

### Sample Input
```
1010
```

### Sample Output
```
10
```

### Explanation
Binary 1010 to Decimal:
- 0 × 2⁰ = 0 × 1 = 0
- 1 × 2¹ = 1 × 2 = 2
- 0 × 2² = 0 × 4 = 0
- 1 × 2³ = 1 × 8 = 8

Sum: 0 + 2 + 0 + 8 = **10**

## Solution

**Language:** C++

```cpp
#include <iostream>
int main() {
    int binary;
    std::cin>>binary;
    int decimal=0;
    int i=1;
    while(binary>0){
        decimal+=(binary%10)*(i);
        binary=binary/10;
        i*=2;
    }
    std::cout<<decimal;
}
```

### Approach
The solution uses the following algorithm:
1. Extract the least significant digit (rightmost bit) using modulo 10
2. Multiply the bit by the current power of 2 (stored in variable `i`)
3. Add this value to the decimal result
4. Remove the last digit from the binary number using integer division by 10
5. Double the power of 2 for the next iteration
6. Repeat until the binary number becomes 0

### Key Points
- The `i` variable stores the power of 2 (1, 2, 4, 8, 16, etc.)
- We process bits from right to left (least significant to most significant)
- Each bit is multiplied by its positional power of 2 value
- All contributions are summed to get the final decimal value

### Time Complexity
- O(log n) where n is the binary number (number of digits in the binary representation)

### Space Complexity
- O(1) - only a constant amount of extra space is used
