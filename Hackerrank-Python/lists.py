main_list = []
n = int(input())
for i in range(n):
    comand = []
    str = input()
    comand =list(str.split(' '))

    length = len(comand)

    if comand[0] == "insert":
        i = int(comand[1])
        e = int(comand[2])
        main_list.insert(i,e)
    elif comand[0] == "print":
        print(main_list)
    elif comand[0] == "remove":
        e = int(comand[1])
        main_list.remove(e)
    elif comand[0] == "append":
        e = int(comand[1])
        main_list.append(e)
    elif comand[0] == "sort":
        main_list.sort()
    elif comand[0] == "pop":
        main_list.pop()
    elif comand[0] == "reverse":
        main_list.reverse()
