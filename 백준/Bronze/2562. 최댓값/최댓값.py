big = 0
big_index = -1

for i in range(9):
    new_num = int(input())
    if big < new_num:
        big = new_num
        big_index = i
print(big, big_index + 1)