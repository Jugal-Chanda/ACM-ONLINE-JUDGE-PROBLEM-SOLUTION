#12157 Tariff Plan
import sys,math
tc = int(sys.stdin.readline())
for t in range(tc):
    n = int(sys.stdin.readline())
    input_list = list(map(int,sys.stdin.readline().split()))
    Mile,Juice = 0,0
    for i in range(n):
        x = int(input_list[i]/30) + 1
        y =  int(input_list[i]/60) + 1
        Mile = Mile + (x* 10)
        Juice = Juice + (y * 15)
    if Mile>Juice:
        print("Case {}: Juice {}".format(t+1,Juice))
    elif Mile<Juice:
        print("Case {}: Mile {}".format(t+1,Mile))
    else:
        print("Case {}: Mile Juice {}".format(t+1,Mile))
