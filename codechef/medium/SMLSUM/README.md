# SMLSUM

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Sum of Smaller Elements

You are given two sequences $A_1, A_2, \ldots, A_N$ and $B_1, B_2, \ldots, B_N$.

You need to answer $Q$ queries. In each query you are given an integer $X$ and you need find the sum of all elements $B_i$ of the sequence $B$ for which it holds that $A_i \leq X$.

### Input Format
- The first line of the input contains a single integer $T$ denoting the number of test cases. The description of $T$ test cases follows.
- The first line of each test case contains two-space separated integers $N$ and $Q$.
- The second line contains $N$ space-separated integers $A_1, A_2, \ldots, A_N$.
- The third line contains $N$ space-separated integers $B_1, B_2, \ldots, B_N$.
- The fourth line contains $Q$ space-separated integers $X_1, X_2, \ldots, X_Q$.
### Output Format
- For each test case, print a single line containing $Q$ space-separated integers. The $j$-th integer in the line should be the sum of all elements $B_i$ of the sequence $B$ for which it holds that $A_i \leq X_j$.
### Constraints
- $1 \leq T \leq 100$
- $1 \leq N,Q \leq 10^5$
- the sum of $N$ over all test cases does not exceed $2 \cdot 10^{5}$
- the sum of $Q$ over all test cases does not exceed $2 \cdot 10^{5}$
- $1 \leq A_i,B_i,X_i \leq 10^9$ for each valid $i$
### Subtasks

 **Subtask #1 (30 points):** 

- $N,Q \le 2000$
- the sum of $N$ over all test cases does not exceed $4000$
- the sum of $Q$ over all test cases does not exceed $4000$

 **Subtask #2 (70 points):**  original constraints

### Sample 1:
Input
Output

```
1
5 5
6 2 8 1 4
9 9 8 9 1
1 2 3 9 5
```

```
9 18 18 36 19
```

### Explanation:

 **Example case 1:**  In the first query, only $A_4 = 1 \leq 1$ so the answer is $B_4=9$. In the second query, $A_4 \leq 2$ and $A_2 \leq 2$ so the answer is $B_4+B_2=18$. In the third query, only elements on positions $2$ and $4$ are appropriate, so the answer is $18$ again. In the fourth query, all the elements are smaller than or equal to $9$, so the answer is $B_1+B_2+B_3+B_4+B_5=36$. In the fifth query, $A_2 \leq 5$, $A_4 \leq 5$ and $A_5 \leq 5$ so the answer is $B_2+B_4+B_5=19$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-23T04:14:28.238Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n],b[n],x[q];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<q;i++) cin>>x[i];
        for(int i=0;i<q;i++){
        int sum=0;
            for(int j=0;j<n;j++){
                if(a[j]<=x[i]) sum=sum+b[j];
            }
            cout<<sum<<' ';
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SMLSUM)