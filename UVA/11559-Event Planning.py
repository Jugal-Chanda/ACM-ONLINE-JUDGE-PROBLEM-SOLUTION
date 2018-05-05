import sys
line = sys.stdin.readline()
while len(line):
    n,b,h,_ = map(int,line.split())
    main_budget = b+100
    for _ in range(h):
        p,temp_budget = int(sys.stdin.readline()),main_budget+10
        seat_list = list(map(int,sys.stdin.readline().split()))
        for seat in seat_list:
            if seat>=n:
                temp_budget = n*p
                break
        if(temp_budget<main_budget):
            main_budget = temp_budget
    if main_budget<b:
        print(main_budget)
    else:
        print("stay home")
    line = sys.stdin.readline()
