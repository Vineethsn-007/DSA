# LCPPAS87

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Identify and correct the logic to print  **true**  if a number is even, else  **false**.

### Sample 1:
Input
Output

```
5
```

```
false
```

### Sample 2:
Input
Output

```
8
```

```
true
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-27T17:55:41.356Z  

```c_cpp
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n % 2 != 0) {
    cout << "false\n";
  } 
  else {
    cout << "true\n";
  }

  return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS87)