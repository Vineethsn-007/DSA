# LCPPAS120

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a program to generate and print the first $N$ terms of the  **Fibonacci series**  using a for-loop.

The  **Fibonacci series**  is the sequence where each number is the  **sum of the previous two numbers of the sequence**.

The number at the  **nth position**  can be represented by:
 **Fn = Fn-1 + Fn-2** 

where,
 **F0 = 0 and F1 = 1** 

Check the sample input / output below for further clarity.

### Input Format
- The first and only line of input contains $N$.
### Output Format
- On a single line, print the first $N$ terms of the fibonacci series with a space between them.
### Sample 1:
Input
Output

```
10
```

```
0 1 1 2 3 5 8 13 21 34 
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-27T18:07:52.707Z  

```c_cpp
 #include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Update your code below this line
    int a[n]={0,1};
    
    for(int i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS120)