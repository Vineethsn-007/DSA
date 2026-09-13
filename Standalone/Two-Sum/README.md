# Two Sum

## Problem

Given an array of integers and a target integer, find two numbers in the array whose sum equals the target.

Return the two numbers if a valid pair exists, otherwise print "No solution".

### Input Format
- First line: an integer n — the size of the array
- Second line: an integer target — the target sum
- Third line: n space-separated integers — the array elements

### Output Format
- Two space-separated integers representing a pair from the array whose sum equals the target, or the string `No solution` if no such pair exists.

### Sample Input
```
5
9
2 7 11 15 3
```

### Sample Output
```
2 7
```

### Explanation
2 + 7 = 9 which equals the target.

## Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int target;
    cin>>target;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==target) cout<<a[i]<<" "<<a[j];
        }
    }
}
```

### Approach
1. Check every pair of elements in the array using two nested loops.
2. If a pair sums to target, print the pair.

### Time Complexity
- O(n^2) where n is the number of elements in the array.

### Space Complexity
- O(1) additional space.
