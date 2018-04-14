#Kefa_and_First_Steps.py
n = int(input())
input_list = list(map(int,input().split()))
count_final = 1
count = 1

for i in range(n-1):
    if(input_list[i]<=input_list[i+1]):
        count+=1
    if (input_list[i]>input_list[i+1] or i+1 ==n-1):
        if count>count_final:
            count_final = count
        count=1
print(count_final)
