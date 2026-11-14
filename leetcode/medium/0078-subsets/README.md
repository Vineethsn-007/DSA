# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.7 MB (beats 98.59%)  
**Submitted:** 2026-11-14T06:41:16.773Z  

```cpp
class Solution {
public:

    void getSubsets(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets){
        if(i==nums.size()) {
            allSubsets.push_back({ans});
            return;
        }

        ans.push_back(nums[i]);
        getSubsets(nums, ans, i+1,allSubsets);
        ans.pop_back();
        getSubsets(nums, ans, i+1,allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;
        getSubsets(nums,ans,0,allSubsets);
        return allSubsets;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)