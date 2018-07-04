# A_Magnets.py
import sys
n = int(sys.stdin.readline())
magnet_list = [""]*n
magnet_list[0],group = input(),1
for i in range(1,n):
    magnet_list[i] = input()
    if not magnet_list[i] == magnet_list[i-1]:
        group+=1
print(group)