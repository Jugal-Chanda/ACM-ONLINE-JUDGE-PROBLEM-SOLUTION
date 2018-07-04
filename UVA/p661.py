#661 - Blowing Fuses
import sys
n,m,c = map(int,sys.stdin.readline().split())
t = 1
while not(n==0 and m==0 and c==0):
    fuse_capacity = [0]*n
    state_devices = [0]*n
    for i in range(n):
        fuse_capacity[i] = int(sys.stdin.readline())
        current_fuse,max_fuse,cheak = 0,0,True
    for i in range(m):
        x = int(sys.stdin.readline())-1
        if(state_devices[x] == 0):
            current_fuse+=fuse_capacity[x]
            state_devices[x] = 1
        else:
            current_fuse-=fuse_capacity[x]
            state_devices[x] = 0
        if current_fuse>c:
            cheak = False
        if cheak == True:
            if (current_fuse>max_fuse):
                max_fuse = current_fuse
    print("Sequence {}".format(t))
    if cheak == False:
        print("Fuse was blown.")
    else:
        print("Fuse was not blown.")
        print("Maximal power consumption was {} amperes.".format(max_fuse))
    print()
    n,m,c = map(int,sys.stdin.readline().split())
    t+=1