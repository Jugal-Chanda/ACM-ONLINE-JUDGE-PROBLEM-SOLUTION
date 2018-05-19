# Double_Cola.py
import math
n,sum,index = int(input()),1,1
while(5*sum<n):
    sum = sum + (2*index)
    index = 2*index
sum_old = sum - (2*(index/2))
final_number =int(n-(5*sum_old))
decision = math.ceil(final_number/index)
if decision == 1:
    print("Sheldon")
elif decision == 2:
    print("Leonard")
elif decision == 3:
    print("Penny")
elif decision == 4:
    print("Rajesh ")
else:
    print("Howard ")
