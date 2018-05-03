test = int(input())
for t in range(test):
    ch,n = input(),int(input())
    x,y = map(int,input().split())
    dif,cheak = abs(x-y),1
    for _ in range(n-1):
        x,y = map(int,input().split())
        if not dif == abs(x-y):
            cheak = 0
    if(cheak==1):
        print("yes")
    else:
        print("no")
    if not t==test-1:
        print("\n",end="")

    