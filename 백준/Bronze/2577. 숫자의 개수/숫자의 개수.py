a = int(input())
b = int(input())
c = int(input())
n = a * b * c

for i in range(10):
    print(str(n).count(str(i)))