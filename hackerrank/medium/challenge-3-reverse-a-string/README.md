# Challenge-3 Reverse a String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string S, your task is to reverse the string and print it.

 **Input Format** 

Reverse a String

 **Constraints** 

1≤∣𝑆∣≤104

 **Output Format** 

Print the reversed string.

 **Sample Input 0** 

```
hello

```

 **Sample Output 0** 

```
olleh

```

 **Explanation 0** 

Letters of the h=word hello should be reversed

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-09T13:34:56.002Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT

s=input()
n=len(s)
a=""
for i in range(n-1,-1,-1):
    a=a+s[i]

print(a)

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/challenge-3-reverse-a-string/problem)