# Search a 2D Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an `m x n` integer matrix `matrix` with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true`  *if*  `target`  *is in*  `matrix`  *or*  `false`  *otherwise*.

You must write a solution in `O(log(m * n))` time complexity.

 

 **Example 1:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

```

 **Example 2:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -104 <= matrix[i][j], target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.3 MB (beats 77.69%)  
**Submitted:** 2026-10-19T16:24:29.423Z  

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(), n=matrix[0].size();
        int stRow=0,endRow=m-1;
        while(stRow<=endRow){
            int midRow=stRow+(endRow-stRow)/2;
            if(target>=matrix[midRow][0] && target<=matrix[midRow][n-1]){
                int st=0,end=n-1;
                while(st<=end){
                    int mid=st+(end-st)/2;
                    if(matrix[midRow][mid]==target) return true;
                    else if(target>matrix[midRow][mid]) st=mid+1;
                    else end=mid-1;
                }
                return false;
            }
            else if(target>matrix[midRow][n-1]) stRow=midRow+1;
            else endRow=midRow-1;
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/search-a-2d-matrix/)