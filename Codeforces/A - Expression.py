#Expression.py
a,b,c = int(input()),int(input()),int(input())
list1 = [(a+b*c),(a*b+c),(a*b*c),(a+b+c),(a+b)*c]
list1.sort()
print(list1[len(list1)-1])
