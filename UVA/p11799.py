#11799 Horror Dash
import sys
tc = int(sys.stdin.readline())
for i in range(tc):
    input_list = list(map(int,sys.stdin.readline().split()))
    print("Case {}: {}".format(i+1,max(input_list)))