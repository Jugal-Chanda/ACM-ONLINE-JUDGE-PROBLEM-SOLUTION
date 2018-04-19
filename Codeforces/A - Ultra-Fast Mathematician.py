#Ultra_Fast_Mathematician.py
a,b = input(),input()
for i in range(len(a)):
    if((a[i] =='1' and b[i]=='0') or (a[i] == '0' and b[i] =='1' )):
        print("1",end="")
    else:
        print("0",end="")
