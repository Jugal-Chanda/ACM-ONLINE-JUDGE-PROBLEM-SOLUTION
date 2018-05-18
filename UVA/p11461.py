#11461 - Square Numbers
import sys,math
a,b = map(int,sys.stdin.readline().split())
while not(a==0 and b==0):
    if not a==0:
        a=a-1
    sqrta , sqrtb= math.floor(math.sqrt(a)),math.floor(math.sqrt(b))
    if (sqrtb-sqrta)<=0:
        print("0")
    else:
        print(sqrtb-sqrta)
    a,b = map(int,sys.stdin.readline().split())