# Vanya_and_Fence.py
ans = 0
n,m = map(int,input().split())
input_list = list(map(int,input().split()))
for i in input_list:
    if i>m:
        ans+=2
    else:
        ans+=1
print(ans)