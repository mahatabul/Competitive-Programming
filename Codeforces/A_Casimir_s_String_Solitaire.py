t = int(input())

for _ in range(t):
    s = input()
    a = s.count("A")
    b = s.count("B")
    c = s.count("C")

    if b == 0:
        print("NO")
    elif c == 0:
        if a == b:
            print("YES")
        else:
            print("NO")
    elif a == 0:
        if b == c:
            print("YES")
        else:
            print("NO")

    else:
        if b == (a + c):
            print("YES")
        else:
            print("NO")
