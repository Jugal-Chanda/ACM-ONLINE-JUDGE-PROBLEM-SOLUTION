#696 - How Many Knights
import sys,math
def count_knights(k):
    x = math.floor(k/4)
    if x == 0:
        x+=1
    extra,ans = k%4,x*4
    if extra ==3 and  not math.floor(k/4)==0:
        extra =2
        ans += (extra*2)
    elif (extra<3) and not math.floor(k/4)==0:
        ans += (extra*2)
    return ans

r,c = map(int,sys.stdin.readline().split())
while not(r == 0 and c==0):
    if r==0 or c==0:
         print("{} knights may be placed on a {} row {} column board.".format(0,r,c))
    elif r==1 or c==1:
        print("{} knights may be placed on a {} row {} column board.".format(r*c,r,c))
    elif r==2:
        print("{} knights may be placed on a {} row {} column board.".format(count_knights(c),r,c))
    elif c==2:
        print("{} knights may be placed on a {} row {} column board.".format(count_knights(r),r,c))
    else:
        print("{} knights may be placed on a {} row {} column board.".format(math.ceil((r*c)/2),r,c))
    r,c = map(int,sys.stdin.readline().split())