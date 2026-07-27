# LCPPAS140

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Develop a function to compute and return the area of a rectangle, given its length and width.

### Sample 1:
Input
Output

```
5 8
```

```
40
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-27T18:14:45.270Z  

```c_cpp
#include <iostream>
using namespace std;

int calculateArea(int length, int width) {
    // Complete this function
    int area=length*width;
    return area;
}

int main() {
    int length, width;
    // take length and width as input
    cin>>length>>width;

    int area = calculateArea(length, width);
    cout << area;
    
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS140)