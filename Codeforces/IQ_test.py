#IQ_test.py
n = int(input())
input_list = list(map(int,input().split()))
temp_list = [0]*n
for i in range(n):
    if(input_list[i]%2==0):
        temp_list[i] =1
if(temp_list.count(1)>temp_list.count(0)):
    print(temp_list.index(0)+1)
else:
    print(temp_list.index(1)+1)
