#10114 - Loansome Car Buyer
import sys
mon,dp,loan,n = map(float,sys.stdin.readline().split())
mon,n = int(mon),int(n)
while mon>=0:
    car_prize = loan + dp
    percent_list = [0]*(mon+1)
    ans,paid_per_month  = 0,(loan/mon)
    for i in range(n):
        month,percent = map(float,sys.stdin.readline().split())
        month = int(month)
        for j in range(month,mon+1):
            percent_list[j] = percent
    for i in range(0,mon+1):
        car_prize = car_prize*(1-percent_list[i])
        if(loan<car_prize):
            ans = i
            break
        loan-=(paid_per_month)
    if ans==1:
        print("1 month")
    else:
        print("{} months".format(ans))
    mon,dp,loan,n = map(float,sys.stdin.readline().split())
    mon,n = int(mon),int(n)