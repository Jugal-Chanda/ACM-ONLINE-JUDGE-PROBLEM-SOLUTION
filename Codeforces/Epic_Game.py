# Epic_Game.py
import math
a,b,n = map(int,input().split())
i = 0
while(1):
    if(i%2 == 0):
        g = math.gcd(a,n)
        if(n<g):
            print("1")
            break
        else:
            n=n-g
    else:
        g = math.gcd(b,n)
        if(n<g):
            print("0")
            break
        else:
            n=n-g
    i+=1