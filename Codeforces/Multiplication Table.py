import sys,math
n,x = map(int,input().split())
divisor = []
limit = int(math.sqrt(x) +2)
for i in range(1,limit):
    if(x%i == 0):
        if(i not in divisor):
            divisor.append(i)
        if(int(x/i) not in divisor):
            divisor.append(int(x/i))
  
c = 0
for i in divisor:
    if(x/i<=n and i<=n):
        c+=1
print(c)
