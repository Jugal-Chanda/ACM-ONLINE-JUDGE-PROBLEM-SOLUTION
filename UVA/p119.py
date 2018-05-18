#119 - Greedy Gift Givers
import sys,math
# sys.stdin = open("input.txt","r")
# sys.stdout = open("output.txt","w")
line = sys.stdin.readline()
while len(line):
    n = int(line)
    name_list = list(map(str,sys.stdin.readline().split()))
    value = [0]*n
    for i in range(n):
        line1 = list(map(str,sys.stdin.readline().split()))
        x = int(line1[1])
        y = int(line1[2])
        length = 3+y
        if not y==0:
            z = math.floor(x/y)
        else:
            z = 0
        name_index = name_list.index(line1[0])
        value[name_index] -=(z*y)
        for j in range(3,length):
            name_index = name_list.index(line1[j])
            value[name_index]+=z
    for i in range(n):
        print("{} {}".format(name_list[i],value[i]))
    line = sys.stdin.readline()
    if(len(line)):
        print()