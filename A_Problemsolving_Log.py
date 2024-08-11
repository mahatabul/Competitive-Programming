t = int(input())

solve = {"A": 1, 'B': 2, 'C': 3, 'D': 4, 'E': 5, 'F': 6, 'G': 7, 'H': 8, 'I': 9, 'J': 10, 'K': 11, 'L': 12, 'M': 13, 'N': 14, 'O': 15, 'P': 16, 'Q': 17, 'R': 18, 'S': 19, 'T': 20, 'U': 21, 'V': 22, 'W': 23, 'X': 24, 'Y': 25, 'Z': 26}
for _ in range(t):
    n = int(input())
    count = 0
    s = input()
    sl = solve
    solved = {}
    for i in range(len(s)):
        solved.update({s[i]: s.count(s[i])})

    for items in solved:
        if items in sl and solved[items]>=sl[items]:
            count+=1
    
    print(count)
