str1 = input()
list_str = list(str1)
cunt = 0
for x in list_str:
    if('4'==x or '7' == x):
        cunt+=1
str2 = str(cunt)
cheak = 0
str2 = list(str2)
for x in str2:
    if(x!='4' and x!= '7'):
        print("NO")
        break
else:
    print("YES")

