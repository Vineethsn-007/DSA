# SQPAPER - Rating 141

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Square Paper

You have a rectangular piece of paper of dimensions $A \cdot B$. You are wondering what is the largest square piece of paper you can cut off from this rectangular piece.

Find the area of this maximum square paper.

You are only allowed to cut along parallel to the edges of the paper, so either horizontal or vertical cuts.

### Input Format
- The only line of input contains $2$ integers - $A$ and $B$.
### Output Format

Output a single integer - the area of the maximum square you can cut off

### Constraints
- $1 \le A, B \le 5$
### Sample 1:
Input
Output

```
2 3

```

```
4

```

### Explanation:

You can cut off a $2 \cdot 2$ square from the rectangle.

### Sample 2:
Input
Output

```
4 3

```

```
9

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-20T06:21:30.153Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y,area;
    cin>>x>>y;
    if(x<y) area=x*x;
    else area=y*y;
    cout<<area;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SQPAPER)