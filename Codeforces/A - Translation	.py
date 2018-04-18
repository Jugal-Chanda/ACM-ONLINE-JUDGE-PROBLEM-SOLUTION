#Translation.py

import string

str1 = input()
str2 = input()

str1 = list(str1)
str1.reverse()
str1 = "".join(str1)
if str1 == str2:
    print("YES")
else:
    print("NO")
