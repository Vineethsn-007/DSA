# Multiplication Table 107

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer N embedded in a sentence, print the multiplication table of N from 1 to 10.

 **Input Format** 

A single line containing a sentence in the following format:

-Print multiplication table of N where N is an integer

 **Constraints** 

1 ≤ N ≤ 100

 **Output Format** 

Print 10 lines, each in the format:

N x i = P (java) where i ranges from 1 to 10 and P = N × i.

 **Sample Input 0** 

```
Print multiplication table of 3

```

 **Sample Output 0** 

```
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30

```

 **Sample Input 1** 

```
Print multiplication table of 7

```

 **Sample Output 1** 

```
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70

```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-15T13:39:23.857Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT

s=input()
n=int(s.split()[-1])

for i in range(1,11):
    print(f'{n} x {i} = {n*i}')
    

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/multiplication-table-107-1/problem)