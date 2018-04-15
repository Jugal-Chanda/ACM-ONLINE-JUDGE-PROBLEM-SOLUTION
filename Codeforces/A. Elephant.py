#Elephant.py
n = int(input())
steps = [5,4,3,2,1]
toal_step = 0
for i in steps:
    toal_step += (n//i)
    n=n%i
print(int(toal_step))
