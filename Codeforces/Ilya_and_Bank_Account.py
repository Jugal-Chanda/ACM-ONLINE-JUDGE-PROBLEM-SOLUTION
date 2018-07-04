# Ilya_and_Bank_Account.py
n = input()
if(not n[0] == '-'):
    print(n)
else:
    if(n[len(n)-1]<n[len(n)-2]):
        x = n[:len(n)-2]+n[len(n)-1]
        print("{}".format(int(x)))
    else:
        print("{}".format(int(n[:len(n)-1])))