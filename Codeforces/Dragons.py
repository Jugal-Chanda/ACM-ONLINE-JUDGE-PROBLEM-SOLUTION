# Dragons.py
s,n = map(int,input().split())
x,y,cheak = [None]*n,[None]*n,True 
for i in range(n):
    x[i],y[i]  = map(int,input().split())
for i in range(n):
    for j in range(i+1,n):
        if x[i]>x[j]:
            x[i],x[j] = x[j],x[i]
            y[i],y[j] = y[j],y[i] 

for i in range(n):
    if s>x[i]:
        s+=y[i]
    elif(s<=x[i]):
        print("NO")
        break
else:
    print("YES")



