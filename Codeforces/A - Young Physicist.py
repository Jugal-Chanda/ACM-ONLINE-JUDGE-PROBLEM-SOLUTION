n = int(input())
sum1,sum2,sum3 = 0,0,0
for i in range (n):
    a,b,c = input().split()
    a,b,c = int(a),int(b),int(c)
    sum1 = sum1 +a 
    sum2 = sum2 +b
    sum3 = sum3 +c
if(sum1==0 and sum2==0 and sum3==0):
    print("YES")
else:
    print("NO")
