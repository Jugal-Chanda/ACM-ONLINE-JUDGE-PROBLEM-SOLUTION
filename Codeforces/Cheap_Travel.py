# Cheap_Travel.py
import sys
n,m,a,b = map(int,sys.stdin.readline().split())
temp1 = n*a
temp2 = int(n/m)*b + (n%m)*a
if temp1<temp2:
    print(temp1)
else:
    print(temp2)
    