# New_Year_Candles.py
a,b = map(int,input().split())
hour,close = a,a
while(int(close//b)!=0):
    hour = hour + int(close//b)
    close = int(close//b) + (close%b)
    
print(hour)