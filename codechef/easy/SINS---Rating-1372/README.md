# SINS - Rating 1372

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### The Deadly Sin

Meliodas and Ban are fighting over chocolates. Meliodas has $X$ chocolates, while Ban has $Y$. Whoever has lesser number of chocolates eats as many chocolates as he has from the other's collection. This eatfest war continues till either they have the  **same number of chocolates**, or atleast one of them is left with  **no chocolates**.
Can you help Elizabeth predict the total no of chocolates they'll be left with at the end of their war?

### Input Format
- First line will contain $T$, number of testcases. Then the testcases follow.
- Each testcase contains of a single line of input, which contains two integers $X, Y$, the no of chocolates Meliodas and Ban have, respectively.
### Output Format

For each testcase, output in a single line the no of chocolates that remain after Ban and Meliodas stop fighting.

### Constraints
- $1 \leq T \leq 100000$
- $0 \leq X,Y \leq 10^9$
### Sample 1:
Input
Output

```
3
5 3
10 10
4 8
```

```
2
20
8

```

### Explanation:

Denoting Meliodas as $M$, Ban as $B$.

Testcase 1:
$M$=5, $B$=3
Ban eates 3 chocolates of Meliodas.
$M$=2, $B$=3
Meliodas eats 2 chocolates of Ban.
$M$=2, $B$=1
Ban eates 1 chocolate of Meliodas.
$M$=1, $B$=1
Since they have the same no of candies, they stop quarreling.
Total candies left: 2

Testcase 2:
$M$=10, $B$=10
Since both of them had the same candies to begin with, there was no point in fighting.
Total candies left: 20

Testcase 3:
$M$=4, $B$=8
Meliodas eats 4 chocolates of Ban.
$M$=4, $B$=4
Since they have the same no of candies, they stop quarreling.
Total candies left: 8

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-22T08:28:19.500Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;
int leftover(int x, int y) {
    if (x==0) return y;
    if (y==0) return x;
    if (x==y) return (x+y)/2;
    if (x>y) return leftover((x%y),y);
    else return leftover(x,(y%x));
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << 2*leftover(x, y) << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SINS)