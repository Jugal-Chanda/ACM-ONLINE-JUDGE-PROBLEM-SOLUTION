#12015 - Google is Feeling Lucky
import sys
tc = int(sys.stdin.readline())
for t in range(tc):
    weblink = []
    numbers = []
    for _ in range(10):
        a,b = map(str,sys.stdin.readline().split())
        weblink.append(a)
        numbers.append(int(b))
    print("Case #{}:".format(t+1))
    numbers_coppy = numbers.copy()
    numbers_coppy.sort()
    count_max = numbers.count(numbers_coppy[9])
    for i in range (count_max):
        pos = numbers.index(numbers_coppy[9])
        print(weblink[pos])
        del weblink[pos]
        del numbers[pos]
    weblink.clear()
    numbers.clear()