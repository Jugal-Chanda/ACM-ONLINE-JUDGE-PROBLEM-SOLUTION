import sys,math
isprime = [0]*5000010
prime = [2]
def seive():
    isprime[1] = isprime[0] = 1
    for i in range(4,5000010,2):
        temp = i
        while(temp>0 and  temp % 2 == 0):
            temp /= 2
            isprime[i]+=1
    for i in range(3,5000010,2):
        if(isprime[i] == 0):
            prime.append(i)
            isprime[i] = 1 
            for j in range(2*i,5000010,i):
                temp = j
                while(temp>0 and  temp % 2 == 0):
                    temp /= i
                    isprime[j]+=1
                
seive()
# fector = [0]*5000010
# for i in range(5000010):
#     for j in range(len(prime)):
#         temp = i
#         while(temp>0 and not( temp % prime[j] == 0)):
#             temp /= prime[j]
#             fector[i]+=1

print(isprime[8])