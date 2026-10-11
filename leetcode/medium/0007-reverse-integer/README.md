# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 19.97%)  
**Memory:** 8.4 MB (beats 83.02%)  
**Submitted:** 2026-10-11T09:41:42.465Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x!=0){
            int dig=x%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10) return 0;
            ans=ans*10+dig;
            x=x/10;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)