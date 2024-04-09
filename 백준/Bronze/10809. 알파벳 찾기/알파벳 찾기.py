S = input()

lst = [-1 for i in range(26)]
for i in range(len(S)):
    alphabet_num = ord(S[i]) - 97
    if lst[alphabet_num] == -1:
        lst[alphabet_num] = i
print(*lst)