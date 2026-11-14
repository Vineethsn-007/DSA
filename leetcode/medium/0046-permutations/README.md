# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 50.99%)  
**Memory:** 10.4 MB (beats 94.66%)  
**Submitted:** 2026-11-14T15:38:31.925Z  

```cpp
class Solution {
public:

    void getPerm(vector<int> &nums, vector<vector<int>> &ans, int idx){
        if(idx==nums.size()){
            ans.push_back({nums});
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            getPerm(nums,ans,idx+1);
            swap(nums[idx],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx;
        getPerm(nums,ans,0);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)