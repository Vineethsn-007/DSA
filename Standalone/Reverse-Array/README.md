# Reverse Array (Swap Array)

## Problem

Reverse the elements of an array in-place by swapping elements from the ends towards the center.

### Example
Given array:
```
1 2 3 4 5
```
After reversing:
```
5 4 3 2 1
```

## Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start+=1;
        end-=1;
    }
}

int main() {
	// your code goes here
    int arr[]={1,2,3,4,5};
    int size=5;
    reverseArr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   
}
```

### Approach
- Use two pointers (start and end). Swap elements while start < end and move pointers inward.

### Time Complexity
- O(n)

### Space Complexity
- O(1)
