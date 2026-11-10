# 4Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of `n` integers, return  *an array of all the  **unique**  quadruplets*  `[nums[a], nums[b], nums[c], nums[d]]` such that:

- 0 <= a, b, c, d < n
- a, b, c, and d are distinct.
- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

```

 **Example 2:** 

```
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 200
- -109 <= nums[i] <= 109
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 24 ms (beats 34.05%)  
**Memory:** 17.3 MB (beats 74.91%)  
**Submitted:** 2026-11-10T07:52:04.680Z  

```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for (int j = i + 1; j < n;) {
                int st = j + 1, end = n - 1;
                while (st < end) {
                    long long sum = (long long)nums[i] + (long long)nums[j] +
                                    (long long)nums[st] + (long long)nums[end];
                    if (sum < target)
                        st++;
                    else if (sum > target)
                        end--;
                    else if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[st], nums[end]});
                        st++;
                        end--;
                        while(st<n && nums[st]==nums[st-1]) st++;
                    }
                }
                j++;
                while(j<n && nums[j]==nums[j-1]) j++;
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/4sum/)