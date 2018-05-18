#12554 A Special “Happy Birthday” Song!!!
import sys,math
n = int(sys.stdin.readline())
name_list = []
for i in range(n):
    name_list.append(sys.stdin.readline())
song = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you " * (int(math.ceil(n/16)))
song = list(map(str,song.split()))
name_list = " ".join(name_list)
name_list = name_list * int(math.ceil(len(song)/n))
name_list = list(map(str,name_list.split()))
for i in range(len(song)):
    print("{}: {}".format(name_list[i],song[i]))
