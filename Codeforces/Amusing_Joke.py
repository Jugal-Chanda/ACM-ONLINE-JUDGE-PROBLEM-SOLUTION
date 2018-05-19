# Amusing_Joke.py
guest,host,str1 = input(),input(),input()
str2,str1_list = guest+host,list(str1)

for x in str2:
    if x not in str1_list:
        print("NO")
        break
    str1_list.remove(x)
else:
    if "".join(str1_list) == "":
        print("YES")
    else:
        print("NO")
