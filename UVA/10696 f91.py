# f91.py
x = int(input())
while(x!=0):
    if x<=101:
        print("f91({}) = {}".format(x,91))
    else:
        print("f91({}) = {}".format(x,x-10))
    x = int(input())
