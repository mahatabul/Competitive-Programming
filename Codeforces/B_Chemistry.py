I = input
for _ in [0] * int(I()):
    k = int(I().split()[1])
    s = I()
    print("YNEOS"[k + 1 < sum(s.count(x) % 2 for x in {*s}) :: 2])
