a = int(input())
b = int(input())

c = a * (b % 10)
print(c)

d = a * ((b % 100) // 10)
print(d)

e = a * (b // 100)
print(e)

result = c + (d * 10) + (e * 100)
print(result)