# Peak Index in a Mountain Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer  **mountain**  array `arr` of length `n` where the values increase to a  **peak element**  and then decrease.

Return the index of the peak element.

Your task is to solve it in `O(log(n))` time complexity.

 

 **Example 1:** 

 **Input:**  arr = [0,1,0]

 **Output:**  1

 **Example 2:** 

 **Input:**  arr = [0,2,1,0]

 **Output:**  1

 **Example 3:** 

 **Input:**  arr = [0,10,5,2]

 **Output:**  1

 

 **Constraints:** 

- 3 <= arr.length <= 105
- 0 <= arr[i] <= 106
- arr is guaranteed to be a mountain array.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 63.6 MB (beats 10.71%)  
**Submitted:** 2026-09-21T18:17:41.778Z  

```cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1,end=size(arr)-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
            if(arr[mid-1]<arr[mid]) st=mid+1;
            else  end=mid-1; 
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/peak-index-in-a-mountain-array/)