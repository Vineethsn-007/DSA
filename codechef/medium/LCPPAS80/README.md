# LCPPAS80

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Write a C++ program that takes two integers and an operator (+, -, *, /) as input.
Use a 'switch' statement to perform the corresponding arithmetic operation and print the result.

Check the sample input / output below for clarity.

(**Note:**  It is guaranteed that in the hidden test cases, the second number will not be 0 during division.)

### Sample 1:
Input
Output

```
5 2 +
```

```
7
```

### Sample 2:
Input
Output

```
10 10 /
```

```
1
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-27T17:54:51.184Z  

```c_cpp
 #include <iostream>
using namespace std;

int main() {
	// your code goes here
    int a,b;
    char op;
    cin>>a>>b>>op;
    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"Invalid operator";
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/LCPPAS80)