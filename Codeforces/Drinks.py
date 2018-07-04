# Drinks.py
import sys
n = int(sys.stdin.readline())
input_list = list(map(int,sys.stdin.readline().split()))
ans = 0
for i in input_list:
    ans+=(i/100)
ans = ans/n
print("{:.12f}".format(ans*100))