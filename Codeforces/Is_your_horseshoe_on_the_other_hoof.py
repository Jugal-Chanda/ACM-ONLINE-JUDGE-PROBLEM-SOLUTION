# Is_your_horseshoe_on_the_other_hoof.py
input_list = list(map(int,input().split()))
input_list.sort()
c = []
count = 0
for i in input_list:
    if i not in c:
        c.append(i)
    else:
        count+=1
print(count)