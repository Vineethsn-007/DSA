# Count the Vowels 34

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a string s. Your task is to count the number of vowels present in the string and print the result.

For the purpose of this challenge, vowels are defined as the lowercase letters: a,e,i,o,u.

 **Input Format** 

A single line containing a string s.

 **Constraints** 

1 <= len(s) <= 10^5

 **Output Format** 

A single integer: the number of vowels in the string.

 **Sample Input 0** 

```
hello world

```

 **Sample Output 0** 

```
3

```

 **Sample Input 1** 

```
AEIOUaeiou

```

 **Sample Output 1** 

```
5

```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T13:42:11.210Z  

```py
# Enter your code here. Read input from STDIN. Print output to STDOUT

vowels={'a','e','i','o','u'}

s=input()
count=0

for i in range(0,len(s)):
    if s[i] in vowels:
        count+=1

print(count)

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/count-the-vowels-34/problem)