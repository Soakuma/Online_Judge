import sys

t = int(sys.stdin.readline().rstrip())

for i in range(t):
    a, b = map(int, sys.stdin.readline().rstrip().split())
    x = 1
    print(f"Case #{i+1}: {a + b}")