# Xenia_and_Ringroad.py
n,m = map(int,input().split())
input_list = list(map(int,input().split()))
input_list.insert(0,1)
time_ans = 0
for i in range(1,m+1):
    if input_list[i]>=input_list[i-1]:
        time_ans+=(input_list[i]-input_list[i-1])
    else:
        time_ans+=((n-input_list[i-1])+1)
        time_ans+=(input_list[i]-1)
print(time_ans)