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
i = 4
while True:
    x = n-i
    if(isprime[x] and isprime[i]):
        print(i,x)
        break
    i+=1
        