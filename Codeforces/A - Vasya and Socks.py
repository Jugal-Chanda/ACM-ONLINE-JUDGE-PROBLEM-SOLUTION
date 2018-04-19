# Vasya_and_Socks.py
a,b = map(int,input().split())
adder,temp,ans = 0,a,a
while(temp!=0):
    temp = int(ans//b)
    temp = temp-adder
    ans = ans + temp
    adder = adder +temp
print(ans)
