n = int(input())
for i in range(n):
    a, b, c= map(float, input().split())
    total = a * b * c
    print('$%.2f' % total)