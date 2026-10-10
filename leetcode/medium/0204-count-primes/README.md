# Count Primes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer `n`, return  *the number of prime numbers that are strictly less than*  `n`.

 

 **Example 1:** 

```
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

```

 **Example 2:** 

```
Input: n = 0
Output: 0

```

 **Example 3:** 

```
Input: n = 1
Output: 0

```

 

 **Constraints:** 

- 0 <= n <= 5 * 106

## Solution

**Language:** C++  
**Runtime:** 287 ms (beats 77.53%)  
**Memory:** 14 MB (beats 76.24%)  
**Submitted:** 2026-10-10T15:37:09.274Z  

```cpp
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1,true);
        int ans=0;
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                ans++;
                for(int j=i*2;j<n;j+=i){
                    isPrime[j]=false;
                }
            }
        } 
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)