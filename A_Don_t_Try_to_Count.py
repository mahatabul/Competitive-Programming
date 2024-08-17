t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    s = input()
    x = input()
    step = 0
    while s.find(x) == -1:
        s = s * 2
        step += 1
        if len(s)>(len(x)*2) and s.find(x)==-1:
            step = -1
            break

    print(step)
