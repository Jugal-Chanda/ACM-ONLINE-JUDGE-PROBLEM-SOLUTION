#Design_Tutorial_Learn_from_Math.py
numbers = [1]*1000010
def prime():
    numbers[1] = 0
    numbers[2] = 0
    for i in range(4,1000010,2):
        numbers[i] = 0
    for i in range(3,1000010,2):
        if(numbers[i]==1):
            for j in range(i+i,1000010,i):
                numbers[j] = 0
prime()
n = int(input())
a = 4
b = n-4
while(1):
    if(numbers[a] == 0 and numbers[b] == 0):
        break
    else:
        a = a+1
        b = n-a
print(int(a),int(b))
