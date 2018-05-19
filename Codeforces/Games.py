#Games.py
n = int(input())
home = [None]*n
guest = [None]*n
for i in range(n):
    a,b = map(int,input().split())
    home[i],guest[i] = a,b
ans = 0
for i in range(n):
    for j in range(i+1,n):
        if home[i] == guest[j]:
            ans+=1
        if home[j] == guest[i]:
            ans+=1
print(ans)


