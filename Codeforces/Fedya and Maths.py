n =input()
sum = 0
length = len(n)
if length>1:
    sum = sum + ord(n[length-1])
    sum = sum + ord(n[length-2])*10
else:
    sum = sum + ord(n[length-1])
if(sum%4==0):
    print("4")
else:
    print("0")
