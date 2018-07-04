n  = int(input())
string_list = []
string_len = []
sorted_list = []
for i in range(n):
    s = input()
    string_len.append(len(s))
    string_list.append(s)
for i in range(n):
    for j in range(i+1,n):
        if(string_len[i]>string_len[j]):
            string_len[i],string_len[j] = string_len[j],string_len[i]
            string_list[i],string_list[j] = string_list[j],string_list[i]
cheak = True
for i in range(n-1):
    if(string_list[i] in string_list[i+1]):
        sorted_list.append(string_list[i])
    else:
        cheak = False
        break
sorted_list.append(string_list[n-1])
if(cheak == True):
    print("YES")
    for x in sorted_list:
        print(x)
else:
    print("NO")