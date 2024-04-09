word = input()
croatia = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]
for croatian_word in croatia:
    word = word.replace(croatian_word, "a")
print(len(word))