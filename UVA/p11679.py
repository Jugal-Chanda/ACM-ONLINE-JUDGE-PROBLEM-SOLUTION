#11679 - Sub-prime
import sys,math
b,n = map(int,sys.stdin.readline().split())
while(not(b==0 and n==0)):
    r = list(map(int,sys.stdin.readline().split()))
    for i in range(n):
        d,c,v = map(int,sys.stdin.readline().split())
        r[d-1],r[c-1] = r[d-1] - v,r[c-1]+v
    for i in range(b):
        if r[i]<0:
            print("N")
            break
    else:
        print("S")
    b,n = map(int,sys.stdin.readline().split())