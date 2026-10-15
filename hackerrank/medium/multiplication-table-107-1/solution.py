# Enter your code here. Read input from STDIN. Print output to STDOUT

s=input()
n=int(s.split()[-1])

for i in range(1,11):
    print(f'{n} x {i} = {n*i}')
    
