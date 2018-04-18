#Insomnia_cure.py

k,l,m,n = int(input()),int(input()),int(input()),int(input())
d= int(input())

mark_list = [0]*(d+1)

for i in range(k,d+1,k):
    mark_list[i] = 1
for i in range(l,d+1,l):
    mark_list[i] = 1
for i in range(m,d+1,m):
    mark_list[i] = 1
for i in range(n,d+1,n):
    mark_list[i] = 1
ans = mark_list.count(1)
print(ans)
