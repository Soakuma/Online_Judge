while True:
    n = int(input())
    if n == 0:
        break
    fine = 0

    for i in range(0, n):
        fine += n
        n = n - 1
    print(fine)