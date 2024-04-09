H, M = map(int, input().split())
C = int(input())

M += C
H += M // 60
M = M % 60

H = H % 24

print(H, M)