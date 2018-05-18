#11942 - Lumberjack Sequencing
import sys
n = int(sys.stdin.readline())
print("Lumberjacks:")
for i in range (n):
    list1 = list(map(int,sys.stdin.readline().split()))
    list2,list3 = list1.copy(),list1.copy()
    list2.sort()
    list3 = list2.copy()
    list3.reverse()
    if list1 == list2:
        print("Ordered")
    elif (list1==list3):
        print("Ordered")
    else:
        print("Unordered")