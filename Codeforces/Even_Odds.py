#Even_odds.py
n,k = map(int,input().split())
even = n//2
odd = n//2
if n%2==1:
    odd+=1
if k<=odd:
    ans = 1+(k-1)*2
else:
    ans = 2+((k-odd)-1)*2
print(ans)