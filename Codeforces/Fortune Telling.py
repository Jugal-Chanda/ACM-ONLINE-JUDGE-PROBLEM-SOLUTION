n = int(input())
input_list = list(map(int,input().split()))
input_list.sort()
x = sum(input_list)
if(x%2 ==1):
    print(x)
else:
    for i in range(n):
        if(input_list[i]%2 == 1):
            print(x-input_list[i])
            break
    else:
        print(0)