# Optimal_Parking.py
def Main():
    test = int(input())
    for _ in range(test):
        n = int(input())
        ara = list(map(int,input().split()))
        ara.sort()
        print((ara[n-1] - ara[0])*2)
if __name__ == '__main__':
    Main()
