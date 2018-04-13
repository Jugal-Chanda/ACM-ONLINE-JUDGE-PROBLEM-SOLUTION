#Queue_at_the_School.py 
n,t = input().split()
n,t = int(n),int(t)
main_str = input()
list_str = list(main_str)
pos = 0
cheak = 0
while(t!=0):
    no_of_bg = main_str.count("BG")
    pos = 0
    for i in range(no_of_bg):
        pos = main_str.find("BG",pos)
        list_str[pos],list_str[pos+1] = list_str[pos+1],list_str[pos]
        main_str = "".join(list_str)
        pos = pos + 2
    t-=1
print(main_str)
