#Word.py
str1 = input()
lower = upper = 0
for x in str1:
    if x.islower():
        lower+=1
    else:
        upper+=1
if lower<upper:
    str1 = str1.upper()
else:
    str1 = str1.lower()
print(str1)
