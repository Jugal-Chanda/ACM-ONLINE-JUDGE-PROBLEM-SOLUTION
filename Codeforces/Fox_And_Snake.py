# Fox_And_Snake.py
r,c = map(int,input().split())
for i in range(1,r+1):
    if i%4 == 0:
        print('#',end="")
        print('.'*(c-1))
    elif i%2 == 0:
        print('.'*(c-1),end="")
        print('#')
    else:
        print('#'*c)

    