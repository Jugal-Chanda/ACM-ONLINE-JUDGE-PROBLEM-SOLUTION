#Presents.py
n = int(input())
input_list = list(map(int,input().split()))
output_list = [None]*n
index = 0
for i in input_list:
    output_list[i-1] = str(index+1)
    index+=1
print(" ".join(output_list))
