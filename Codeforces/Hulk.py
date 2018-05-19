# Hulk.py
n = int(input())
if n%2==0:
    print("I hate that I love that "*(int(n/2)-1),end="")
    print("I hate that I love it")
else:
    print("I hate that I love that "*(int(n//2)),end="")
    print("I hate it")