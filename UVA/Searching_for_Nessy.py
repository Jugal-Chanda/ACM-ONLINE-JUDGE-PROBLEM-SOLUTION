# Searching_for_Nessy.py
test = int(input())
for i in range(test):
    r,c = map(int,input().split())
    x = int(r//3)
    y = int(c//3)
    print(x*y) 