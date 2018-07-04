#A_Beautiful_Year.py
import sys,math
def cheak_distrinct(year):
    for i in year:
        if year.count(i)>1:
            return 0
    else:
        return 1
year= int(sys.stdin.readline())
while True:
    year+=1
    year_str = str(year)
    if(cheak_distrinct(year_str)):
        print(year)
        break