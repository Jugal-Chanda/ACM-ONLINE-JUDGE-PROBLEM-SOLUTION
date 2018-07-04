import math
isprime = [0]*1000010
prime = []
def seive():
    isprime[1] = isprime[0] = 1
    prime.append(2)
    limit = int(math.sqrt(1000010))+2
    for i in range(4,1000010,2):
        isprime[i] = 1
    for i in range(3,1000010,2):
        if(not isprime[i]):
            prime.append(i)
            if(i <= limit):
                for j in range(i*i,1000010,i*2):
                    isprime[j] = 1
seive()
n = int(input())
output_list = []
index = 0
while prime[index]<=n:
    p = 1
    x = pow(prime[index],p)
    while(x<=n):
        output_list.append(x)
        p+=1
        x = pow(prime[index],p)
    index+=1
print(len(output_list))
for x in output_list:
    print(x,end=" ")
print()
