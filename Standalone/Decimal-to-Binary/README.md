# Decimal to Binary Conversion

## Problem

Convert a decimal (base 10) number to its binary (base 2) equivalent without using built-in conversion functions.

The binary representation of a number is obtained by repeatedly dividing the number by 2 and collecting the remainders in reverse order.

### Input Format
- A single integer `DecNo` representing a decimal number

### Output Format
- A single integer representing the binary equivalent of the decimal number

### Sample Input
```
10
```

### Sample Output
```
1010
```

### Explanation
Decimal 10 in binary:
- 10 ÷ 2 = 5 remainder 0
- 5 ÷ 2 = 2 remainder 1
- 2 ÷ 2 = 1 remainder 0
- 1 ÷ 2 = 0 remainder 1

Reading remainders from bottom to top: **1010**

## Solution

**Language:** C++

```cpp
#include <iostream>
int main() {
    int DecNo;
    std::cin>>DecNo;
    int binary=0,pow=1;
    while(DecNo>0){
        int rem=DecNo%2;
        DecNo=DecNo/2;
        binary+=(rem*pow);
        pow=pow*10;
    }
    std::cout<<binary;
}
```

### Approach
The solution uses the following algorithm:
1. Extract the remainder when dividing the decimal number by 2 (this gives the least significant bit)
2. Divide the decimal number by 2 (integer division)
3. Multiply the remainder by a power of 10 and add it to the binary result
4. Increment the power of 10 for the next iteration
5. Repeat until the decimal number becomes 0

### Key Points
- The `pow` variable keeps track of the positional value (1, 10, 100, 1000, etc.)
- `rem` stores the remainder which is either 0 or 1
- The binary result is built by multiplying each bit by its positional value

### Time Complexity
- O(log n) where n is the decimal number (since we divide by 2 in each iteration)

### Space Complexity
- O(1) - only a constant amount of extra space is used
