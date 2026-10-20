# Matrix Addition 45

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given two matrices, Matrix A and Matrix B, of the same size N × M. Your task is to compute their sum, element by element, and print the resulting matrix.

Matrix addition is performed by adding each element in Matrix A with the corresponding element in Matrix B

 **Input Format** 

The first line contains two integers N and M — the number of rows and columns of the matrices.

The next N lines contain M integers each, representing Matrix A.

The next N lines contain M integers each, representing Matrix B.

 **Constraints** 

1 ≤ N, M ≤ 100 -10^3 ≤ Matrix elements ≤ 10^3

 **Output Format** 

Print Matrix A in the following format:

Matrix A:...

Print Matrix B in the following format:

Matrix B:...

Print the Sum of the matrices in the following format:

Sum:...

 **Sample Input 0** 

```
2 2
1 2
3 4
5 6
7 8

```

 **Sample Output 0** 

```
Matrix A:
1 2
3 4

Matrix B:
5 6
7 8

Sum:
6 8
10 12

```

 **Sample Input 1** 

```
3 3
1 0 2
-1 3 1
4 5 -2
2 1 0
3 -3 4
-4 2 1

```

 **Sample Output 1** 

```
Matrix A:
1 0 2
-1 3 1
4 5 -2

Matrix B:
2 1 0
3 -3 4
-4 2 1

Sum:
3 1 2
2 0 5
0 7 -1

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-20T15:46:18.055Z  

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }  
    
    int ans[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans[i][j]=a[i][j]+b[i][j];
        }
    } 
    
    cout<<"Matrix A:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 
    cout<<endl;
    cout<<"Matrix B:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Sum:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/matrix-addition-45-1/problem)