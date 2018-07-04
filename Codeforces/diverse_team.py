import sys
n,k = map(int,input().split())
input_list = list(map(int,input().split()))
y = []
z = []
i = 0
for x in input_list:
    if(x not in y):
        y.append(x)
        z.append(i+1)
    i+=1
if(len(z)>=k):
    print("YES")
    for i in range(k):
        print(z[i],end=" ")
else:
    print("NO")

