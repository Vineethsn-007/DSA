# Fibonacci Sequence.  1

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer N, print the first N terms of the Fibonacci sequence.

The Fibonacci sequence is defined as: F(0) = 0 F(1) = 1 F(n) = F(n-1) + F(n-2), for n > 1

 **Input Format** 

A single integer N, the number of terms to print.

 **Constraints** 

1 ≤ N ≤ 50

 **Output Format** 

Print the first N terms of the Fibonacci sequence, separated by a space.

 **Sample Input 0** 

```
5

```

 **Sample Output 0** 

```
0 1 1 2 3

```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-10T13:44:28.197Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT

n=int(input())

def fib(n):
    if(n==0):
        return 0
    elif(n==1):
        return 1
    else:
        return fib(n-1)+fib(n-2)
    
for i in range(0,n):
    print(fib(i),end=" ")

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/fibonacci-sequence-1-9/problem)