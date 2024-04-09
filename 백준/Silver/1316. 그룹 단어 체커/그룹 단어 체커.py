num = int(input())
count = 0
for _ in range(num):
    word = input()
    group = True
    if len(word) == 1: # length 1 is always group word
        count += 1
    else:
        current = word[0]
        seen = [word[0]]
        for alphabet in word[1:]:
            if alphabet != current:
                if alphabet in seen:
                    group = False
                    break
                else:
                    current = alphabet
                    seen.append(alphabet)
        if group:
            count += 1
print(count)