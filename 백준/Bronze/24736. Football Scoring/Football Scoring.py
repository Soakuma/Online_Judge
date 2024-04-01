n = []

for i in range(2) :
    a, b, c, d, e = list(map(int, input().split()))
    n.append(a * 6 + b * 3 + c * 2 + d + e * 2)
    
for i in n :
    print(i, end=' ')