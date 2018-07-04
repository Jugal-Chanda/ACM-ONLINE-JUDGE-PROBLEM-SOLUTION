import sys
n = int(sys.stdin.readline())
color_list = ['purple','green','blue','orange','red','yellow']
color_mean = ['Power','Time','Space','Soul','Reality','Mind']
for i in range(n):
    s = input()
    x = color_list.index(s)
    color_list.remove(s)
    color_mean.remove(color_mean[x])
print(len(color_list))
for i in color_mean:
    print(i)

