# LCPPAS149

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program that takes t test cases as input, then for each test case, reads an integer N, and prints N + 1.

### Sample 1:
Input
Output

```
3
4
2
-1
```

```
5
3
0
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-27T18:15:49.540Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while(t--){
        // Complete the code
        int n;
        cin>>n;
        cout<<n+1<<endl;
    }
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS149)