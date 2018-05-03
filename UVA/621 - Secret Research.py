test = int(input())
for _ in range(test):
    number = input()
    length = len(number)
    if int(number) == 1 or int(number) == 4 or int(number) == 78:
        print("+")
    elif  number[length-1] == '5' and number[length-2]=='3':
        print("-")
    elif number[0] == '9' and number[length-1]=='4':
        print("*")
    else:
        print("?")
    