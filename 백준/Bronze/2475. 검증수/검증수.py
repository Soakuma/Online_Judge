num = map(int, input().split())
numadd = 0

for i in num:
   numadd += i ** 2
print(numadd % 10)