# Pow(x, n)

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Implement pow(x, n), which calculates `x` raised to the power `n` (i.e., `xn`).

 

 **Example 1:** 

```
Input: x = 2.00000, n = 10
Output: 1024.00000

```

 **Example 2:** 

```
Input: x = 2.10000, n = 3
Output: 9.26100

```

 **Example 3:** 

```
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25

```

 

 **Constraints:** 

- -100.0 < x < 100.0
- -231 <= n <= 231-1
- n is an integer.
- Either x is not zero or n > 0.
- -104 <= xn <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 71.89%)  
**Submitted:** 2026-09-14T09:23:30.218Z  

```cpp
class Solution {
public:
    double myPow(double x, int n) {
        long binaryform=n;
        double ans=1;
        if(binaryform<0){
            x=1/x;
            binaryform=-binaryform;
        }
        while(binaryform>0){
            if(binaryform%2==1){
                ans=ans*x;
            }
            x=x*x;
            binaryform=binaryform/2;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/powx-n/)