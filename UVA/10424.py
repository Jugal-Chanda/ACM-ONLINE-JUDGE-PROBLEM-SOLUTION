# Love Calculator
import sys,string
# sys.stdin = open("input.txt","r")
# sys.stdout = open("output.txt","w")
def one_number(n):
    sum = n
    while(not(int(sum/10) == 0)):
        n = sum
        sum1 = 0        
        while(not (n==0)):
            sum1+=(n%10)
            n = int(n/10)
        sum = sum1
    return sum
char = [0]*100
x = 1
for i in range(65,92):
    char[i] = x
    x+=1
name1 = sys.stdin.readline()
while len(name1):
    name2 = sys.stdin.readline()
    name1,name2 = name1[0:len(name1)-1],name2[0:len(name2)-1]
    sum_name1,sum_name2 = 0,0
    name1,name2 = name1.upper(),name2.upper()
    for i in name1:
        if (ord(i)>=ord('A')and ord(i)<=ord('Z')):
            sum_name1 += char[ord(i)]
    for i in name2:
        if (ord(i)>=ord('A')and ord(i)<=ord('Z')):
            sum_name2+=char[ord(i)]
    sum_name1,sum_name2 = one_number(sum_name1),one_number(sum_name2)
    if(sum_name1>sum_name2):
        ans = (sum_name2/sum_name1)*100
        print("{:.2f} %".format(ans))
    else:
        ans = (sum_name1/sum_name2)*100
        print("{:.2f} %".format(ans))
    name1 = sys.stdin.readline()