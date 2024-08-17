t = int(input())

for _ in range(t):
    word_dict = {}

    n = int(input())

    p1 = input()
    li1 = p1.split()
    for word in li1:
        word_dict[word] = word_dict.get(word, 0) + 1

    p2 = input()
    li2 = p2.split()
    for word in li2:
        word_dict[word] = word_dict.get(word, 0) + 1

    p3 = input()
    li3 = p3.split()
    for word in li3:
        word_dict[word] = word_dict.get(word, 0) + 1

    a_pt = b_pt = c_pt = 0
    for word in li1:
        if word_dict[word] == 1:
            a_pt += 3
        elif word_dict[word] == 2:
            a_pt += 1
    for word in li2:
        if word_dict[word] == 1:
            b_pt += 3
        elif word_dict[word] == 2:
            b_pt += 1

    for word in li3:
        if word_dict[word] == 1:
            c_pt += 3
        elif word_dict[word] == 2:
            c_pt += 1

    print(a_pt, b_pt, c_pt)
