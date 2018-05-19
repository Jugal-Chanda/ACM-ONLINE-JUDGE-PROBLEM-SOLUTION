#Arrival_of_the_General.py
def Last_index_of(temp_list,element):
    length = len(temp_list)
    for i in range(length):
        if temp_list[i] == element:
            return_index = i
    return return_index

n = int(input())
input_list = list(map(int,input().split()))
minimum,maximum = min(input_list),max(input_list)
min_index,max_index = Last_index_of(input_list,minimum),input_list.index(maximum)
length = len(input_list)-1
ans = length-min_index
ans = ans + max_index
if(min_index<max_index<=length):
    ans = ans-1
print(ans)

