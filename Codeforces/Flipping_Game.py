# Flipping_Game.py
n = int(input())
input_list = list(map(int,input().split()))
i = 0
while(not input_list[i] == 0):
    i+=1
temp_list = []
while(i<n):
    if(input_list[i]==1):
        j = i+1
        while(not input_list[j] == 0):
            j+=1
        
    else:
        temp_list.append(0)
        



