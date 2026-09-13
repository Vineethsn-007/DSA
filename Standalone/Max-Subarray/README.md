# Maximum Subarray (Kadane's Algorithm)

## Problem

Find the maximum sum of a contiguous subarray within a one-dimensional array of numbers (Kadane's algorithm).

### Example
Given array:
```
-1 2 -3 4 -5
```
The maximum subarray sum is 4 (the subarray [4]).

## Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n=5;
    int arr[]={-1,2,-3,4,-5};
    int sum=0;
    int maxSum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxSum=max(maxSum,sum);
        if(sum<0) sum=0;
    }
    cout<<maxSum;
}
```

### Approach
- Use Kadane's algorithm: maintain a running sum; if it becomes negative reset it to zero. Track the maximum running sum seen.

### Time Complexity
- O(n)

### Space Complexity
- O(1)
