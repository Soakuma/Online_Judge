n = int(input())
str = input()
count = 0

for i in str:
    if i in ["a", "e", "i", "o", "u"]:
        count += 1
print(count)