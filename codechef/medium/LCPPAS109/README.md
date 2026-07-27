# LCPPAS109

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program that utilizes a while loop to print the squares of numbers from 1 to $N$.

Check the sample input / output below further clarity.

### Sample 1:
Input
Output

```
5
```

```
1 4 9 16 25
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-27T18:00:57.265Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i*i<<" ";
        i+=1;
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS109)