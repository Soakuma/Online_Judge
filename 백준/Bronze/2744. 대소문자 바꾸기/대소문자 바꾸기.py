WrongAns = input()
TrueAns = ""

for i in range(0, len(WrongAns)):
    if WrongAns[i].isupper():
        TrueAns += WrongAns[i].lower()
    else:
        TrueAns += WrongAns[i].upper()
print(TrueAns)