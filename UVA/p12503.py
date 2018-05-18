#12503 Robot Instructions
import sys
cmd_list,x = [],0

def same_as(c):
    if not (cmd_list[c][0] == "SAME AS"):
        global x
        x+=cmd_list[c][1]
    else:
        same_as(cmd_list[c][1])

tc = int(sys.stdin.readline())
for t in range(tc):
    n = int(sys.stdin.readline())
    x = 0
    for i in range(n):
        cmd =  input()      
        if(cmd == "LEFT"):
            cmd_list.append(["LEFT",-1])
            x+=(-1)
        elif(cmd == "RIGHT"):
            cmd_list.append(["RIGHT",1])
            x+=1
        else:
            a,b,c = map(str,cmd.split())
            c = int(c)-1
            cmd_list.append(["SAME AS",c])
            same_as(c)
    print(x)
    cmd_list.clear()