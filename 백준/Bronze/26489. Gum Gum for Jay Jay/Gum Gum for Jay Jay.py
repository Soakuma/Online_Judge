n = 0

while True:
    try:
        a = input()
        n += 1
    except EOFError:
        break
print(n)