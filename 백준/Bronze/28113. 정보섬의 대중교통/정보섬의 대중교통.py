a, b, c = map(int, input().split())

if b < c:
    print("Bus")
elif b > c:
    print("Subway")
else:
    print("Anything")