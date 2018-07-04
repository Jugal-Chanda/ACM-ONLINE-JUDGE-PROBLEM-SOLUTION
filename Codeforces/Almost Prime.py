limit = int(input())
mark = [0]*(limit+1)
c = 0
for i in range(4,limit+1,2):
    mark[i]+=1
for i in range(3,limit+1,2):
    if(not mark[i]):
        for j in range(2*i,limit+1,i):
            mark[j]+=1
            
print(mark.count(2))