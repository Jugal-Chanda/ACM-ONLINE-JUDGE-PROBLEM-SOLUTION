#11764 - Jumping Mario
import sys,math
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")
tc = int(sys.stdin.readline())
for t in range(tc):
    n,up,down = int(sys.stdin.readline()),0,0
    lengths = list(map(int,sys.stdin.readline().split()))
    for i in range(n-1):
        if(lengths[i]<lengths[i+1]):
            up+=1
        elif (lengths[i]>lengths[i+1]):
            down+=1
    print("Case {}: {} {}".format(t+1,up,down))