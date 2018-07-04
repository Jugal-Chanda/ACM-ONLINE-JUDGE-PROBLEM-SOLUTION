#573 - The Snail
import sys
# sys.stdin = open("input.txt","r")
# sys.stdout = open("output.txt","w")
h,u,d,f = map(float,sys.stdin.readline().split())
while not h==0:
    x = (u*f)/100
    height,day = 0,1
    while True:
        height+=u
        if(height>h):
            print("success on day {}".format(day))
            break
        height-=d
        if (height<0):
            print("failure on day {}".format(day))
            break
        if u>0:
            u-=x
        day+=1
    h,u,d,f = map(float,sys.stdin.readline().split())