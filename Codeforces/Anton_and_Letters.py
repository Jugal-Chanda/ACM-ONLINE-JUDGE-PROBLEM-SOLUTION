# Anton_and_Letters.py
import string
input_set = input()
ans = 0
for i in string.ascii_lowercase:
    if input_set.find(i) != -1:
        ans+=1
print(ans)