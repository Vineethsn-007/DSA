# Enter your code here. Read input from STDIN. Print output to STDOUT

n=int(input())

n_str=str(n)
length=len(n_str)
arm=0
y=n

while(n!=0):
    x=n%10
    arm=arm+(x**length)
    n=n//10
    
if(arm==y):
    print("Yes")
else:
    print("No")
