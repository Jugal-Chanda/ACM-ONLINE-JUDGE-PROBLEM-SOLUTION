# Zeros and Ones
import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")
s = sys.stdin.readline()
tc = 1
while len(s):
    n = int(sys.stdin.readline())
    s = s[0:len(s)-1]
    print("Case {}:  {}".format(tc,s))
    one = []
    zero = []
    c_one,c_zero = 0,0
    length = len(s)
    for i in range(length):
        if(s[i] == '1'):
            c_one+=1
        else:
            c_zero+=1
        one.append(c_one)
        zero.append(c_zero)
    for i in range(n):
        x,y = map(int,input().split())
        if(x==y):
            print("Yes",x,y)
        else:
            if(x>y):
                x,y = y,x
            if x==0:
                n_one = one[y] - 0
                n_zero = zero[y] - 0
            else:
                n_one = one[y] - one[x-1]
                n_zero = zero[y] - zero[x-1]
            
            max,min = 1,0
            if n_one<=0:
                max = 0
            if n_zero<=0:
                min = 1
            if(max == min):
                print("Yes",x,y)
            else:
                print("No",x,y)
    tc+=1
    one.clear()
    zero.clear()
    s = sys.stdin.readline()