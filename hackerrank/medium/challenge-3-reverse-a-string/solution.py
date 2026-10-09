# Enter your code here. Read input from STDIN. Print output to STDOUT

s=input()
n=len(s)
a=""
for i in range(n-1,-1,-1):
    a=a+s[i]

print(a)
