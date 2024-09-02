t = int(input())

for _ in range(t):
    n = int(input())
    s = input()
    
    c = 0
    i = 0
    
    while i <= n - 3:
        if s[i:i+3] == "map" or s[i:i+3] == "pie":
            c += 1
            i += 3  
        else:
            i += 1  
    
    print(c)
