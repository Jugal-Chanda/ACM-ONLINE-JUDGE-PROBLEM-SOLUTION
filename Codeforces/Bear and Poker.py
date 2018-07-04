n = int(input())
input_list = list(map(int,input().split()))
for i in range(n):
    x = input_list[i]
    while x%2==0:
        x = x//2
    while x%3==0:
        x = x//3
    input_list[i] = x
if(input_list.count(input_list[0]) == n):
    print("Yes")
else:
    print("No")
    