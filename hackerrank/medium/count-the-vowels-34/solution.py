# Enter your code here. Read input from STDIN. Print output to STDOUT

vowels={'a','e','i','o','u'}

s=input()
count=0

for i in range(0,len(s)):
    if s[i] in vowels:
        count+=1

print(count)
