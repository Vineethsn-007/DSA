# LCPPAS129

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program using a  **for**  loop to find and print the index of the first occurrence of the number 8 in any given list of $N$ integers.

Check the sample input / output below for further details.

Note that your output needs to take into account that the array is $0$ indexed.

### Input Format
- First line of input contains a positive integer $N$ - the length of the input array.
- Second line of input contains $N$ space separated integers - the elements of the array.
### Output Format
- Output a single integer - the index (0 - based) of the first occurrence of the number 8.
### Sample 1:
Input
Output

```
5
2 4 8 12 8
```

```
2
```

### Explanation:

The first occurrence of the number 8 is at the 2nd index.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-27T18:12:26.626Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==8) {
            cout<<i;
            break;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS129)