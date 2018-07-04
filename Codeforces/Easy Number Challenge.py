number_of_divisor = [1]*1000100
for i in range(2,1000100):
    for j in range(i,1000100,i):
        number_of_divisor[j]+=1
a,b,c = map(int,input().split())
sum = 0
for i in range(1,a+1):
    for j in range(1,b+1):
        for k in range(1,c+1):
            sum+=number_of_divisor[i*j*k]
print(sum)
