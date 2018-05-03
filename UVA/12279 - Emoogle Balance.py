# p12279.py
index = 1
while True:
    n = int(input())
    if n == 0:
        break
    input_list = list(map(int,input().split()))
    zero,list_len = input_list.count(0),len(input_list)
    non_zero = list_len-zero
    print("Case {}: {}".format(index,non_zero-zero))
    index+=1