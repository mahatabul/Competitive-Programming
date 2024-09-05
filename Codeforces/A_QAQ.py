s = input()

ans = sum(s[:i].count("Q")*s[i:].count("Q") for i in range(len(s)) if s[i]=="A" )

print(ans)