import sys,math
isprime = [0]*1000010
def seive():
    isprime[1] = isprime[0] = 1
    limit = int(math.sqrt(1000010))+2
    for i in range(4,1000010,2):
        isprime[i] = 1
    for i in range(3,1000010,2):
        if(not isprime[i]):
            if(i <= limit):
                for j in range(i*i,1000010,i*2):
                    isprime[j] = 1
seive()
n = int(input())
input_list = list(map(int,input().split()))
for i in input_list:
    x = int(math.sqrt(i))
    if(i == x*x and not isprime[x]):
        print("YES")
    else:
        print("NO")