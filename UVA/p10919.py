import sys
line = sys.stdin.readline()
line = line[0:len(line)-1]
while len(line)>1:
    cheak = True
    k,m = map(int,line.split())
    courses = list(map(str,sys.stdin.readline().split()))
    for i in range(m):
        course_list = list(map(str,sys.stdin.readline().split()))
        course_list[0],course_list[1] = int(course_list[0]),int(course_list[1])
        length = len(course_list)
        c = 0
        for j in range(2,length):
            if(course_list[j] in courses):
                c+=1
        if(c<course_list[1]):
            cheak = False
    if cheak == True:
        print("yes")
    else:
        print("no")
    line = sys.stdin.readline()
    line = line[0:len(line)-1]
