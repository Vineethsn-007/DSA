# Subsets II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` that may contain duplicates, return  *all possible*   *subsets** (the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.3 MB (beats 94.68%)  
**Submitted:** 2026-11-14T08:59:36.346Z  

```cpp
class Solution {
public:

    void getSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
        if(i==nums.size()){
            allSubsets.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        getSubsets(nums,ans,i+1,allSubsets);

        ans.pop_back();

        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]) idx++;
        getSubsets(nums,ans,idx,allSubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allSubsets;
        vector<int> ans;
        getSubsets(nums,ans,0,allSubsets);
        return allSubsets;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets-ii/)