# Leap_Birthdays.py
test = int(input())
leep_year = [0]
for i in range(1848,3005,4):
    if((i%400==0) or (i%4 ==0 and not(i%100==0))):
        leep_year.append(i)
for t in range(test):
    d,m,y,qa = map(int,input().split())
    if d==29 and m==2:
        x = leep_year.index(y)
        for i in range(x,len(leep_year)):
            if(leep_year[i]>qa):
                print("Case {}: {}".format(t+1,(i-1)-x))
                break
    else:
        print("Case {}: {}".format(t+1,qa-y))
