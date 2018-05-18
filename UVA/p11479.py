#11479 - Is this the easiest problem?
import sys,math
tc = int(sys.stdin.readline())
for  i_tc in range(tc):
    sides = list(map(int,sys.stdin.readline().split()))
    sides.sort()
    a,b,c = sides.count(sides[0]),sides.count(sides[1]),sides.count(sides[2])
    if(sides[0]+sides[1]>sides[2]):
        if a==3 or b==3 or c==0:
            print("Case {}: Equilateral ".format(i_tc+1))
        elif a==2 or b==2 or c==2:
            print("Case {}: Isosceles ".format(i_tc+1))
        else:
            print("Case {}: Scalene".format(i_tc+1))
    else:
        print("Case {}: Invalid".format(i_tc+1))
