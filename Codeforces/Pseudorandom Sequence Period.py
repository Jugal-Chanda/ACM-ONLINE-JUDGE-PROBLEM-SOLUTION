a,b,m,x0 = map(int,input().split())
rand = [x0]
i = 1
while True:
    x = ((a*rand[i-1])+b)%m
    if(x not in rand):
        rand.append(x)
    else:
        print(len(rand) - rand.index(x))
        break
    i+=1