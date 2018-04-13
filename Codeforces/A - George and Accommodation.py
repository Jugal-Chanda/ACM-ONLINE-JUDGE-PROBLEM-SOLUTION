n = int(input())
c = 0 
for i in range(n):
    a,b = input().split()
    a = int(a)
    b = int(b)
    if b-a>=2:
        c=c+1
print(c)
