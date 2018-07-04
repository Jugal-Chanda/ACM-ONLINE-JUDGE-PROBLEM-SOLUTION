# New_Year_Transportation.py
import sys
n,t = map(int,sys.stdin.readline().split())
a_list = list(map(int,sys.stdin.readline().split()))
a_list.insert(0,0)
x = 1
while True:
    y = a_list[x]+x
    if(y == t):
        print("Yes")
        break
    if y>t:
        print("No")
        break
    x = y
