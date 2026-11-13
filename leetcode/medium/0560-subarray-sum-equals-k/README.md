# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** C++  
**Runtime:** 44 ms (beats 54.41%)  
**Memory:** 46.4 MB (beats 34.47%)  
**Submitted:** 2026-11-13T07:13:00.770Z  

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        vector<int> prefixSum(n,0);
        prefixSum[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixSum[i]=nums[i]+prefixSum[i-1];
        }
        unordered_map<int,int> map;
        for(int j=0;j<n;j++){
            if(prefixSum[j]==k) count++;
            int val=prefixSum[j]-k;
            if(map.find(val)!=map.end()){
                count+=map[val];
            }
            if(map.find(prefixSum[j])==map.end()){
                map[prefixSum[j]]==0;
            }
            map[prefixSum[j]]++;
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)