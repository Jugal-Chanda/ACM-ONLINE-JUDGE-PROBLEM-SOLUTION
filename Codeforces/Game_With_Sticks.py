#Game_With_Sticks.py
r,c = map(int,input().split())
if r<c:
    min=r
else:
    min = c
if min%2==0:
    print("Malvika")
else:
    print("Akshat")