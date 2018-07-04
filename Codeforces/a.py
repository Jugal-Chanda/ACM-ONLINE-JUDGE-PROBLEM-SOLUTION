n = int(input())
input_list = list(map(int,input().split()))
temp_list = []
for x in input_list:
    if x not in temp_list:
        temp_list.append(x)
print(len(temp_list))