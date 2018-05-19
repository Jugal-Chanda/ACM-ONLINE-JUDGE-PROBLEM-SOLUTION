# Pangram.py
import string
n,input_str  = int(input()),input()
input_str = input_str.lower()
for i in string.ascii_lowercase:
    if(input_str.find(i) == -1):
        print("NO")
        break
else:
    print("YES")