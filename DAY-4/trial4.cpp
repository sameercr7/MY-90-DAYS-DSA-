T = int(input())
while (T > 0):
    x, y = map(int, input().split())
    f = (107 * x) / 100
    
    if (f >= y):
        print("Yes")
    else:
        print("No")