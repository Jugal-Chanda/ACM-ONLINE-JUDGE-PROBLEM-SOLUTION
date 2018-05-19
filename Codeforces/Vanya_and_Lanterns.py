# Vanya_and_Lanterns.py
n,l = map(int,input().split())
input_list = list(map(int,input().split()))
temp_list = input_list[:]
temp_list.insert(0,0)
temp_list.insert(n,l)
temp_list.sort()
diff = []
for i in range(n+1):
    if (temp_list[i] in input_list) and (temp_list[i+1] in input_list):
        diff.append((temp_list[i+1]-temp_list[i])/2)
    else:
        diff.append((temp_list[i+1]-temp_list[i]))
diff.sort()
print("{:.10f}".format(diff[len(diff)-1]))

