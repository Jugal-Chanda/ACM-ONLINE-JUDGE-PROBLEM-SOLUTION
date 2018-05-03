# p11498.py
while True:
    n = int(input())
    if n == 0:
        break
    x,y = map(int,input().split())
    for i in range(n):
        a,b = map(int,input().split())
        if a == x or b == y:
            print("divisa")
        elif a<x and b>y:
            print("NO")
        elif a>x and b>y:
            print("NE")
        elif a<x and b<y:
            print("SO")
        elif a>x and b<y:
            print("SE")
