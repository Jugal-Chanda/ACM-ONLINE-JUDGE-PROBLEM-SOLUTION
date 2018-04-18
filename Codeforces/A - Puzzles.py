#Puzzles.py

student,puzzles = map(int,input().split())
input_list = list(map(int, input().split()))
input_list.sort()
ans = input_list[student-1]-input_list[0]
for i in range((puzzles-student)+1): 
    if input_list[i+(student-1)]-input_list[i]<ans:
        ans = input_list[i+(student-1)] - input_list[i]

print(ans)

