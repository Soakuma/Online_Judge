n, m = map(int, input().split())
lst = [i+1 for i in range(n)]

for _ in range(m):
    left, right = map(int, input().split())
    left = left - 1
    right = right - 1
    lst[left], lst[right] = lst[right], lst[left]
print(*lst)