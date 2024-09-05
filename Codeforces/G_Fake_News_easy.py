s = input().strip()


h_index = s.find("h")
if h_index == -1:
    print("NO")
    exit()

e_index = s.find("e", h_index + 1)
if e_index == -1:  
    print("NO")
    exit()

i_index = s.find("i", e_index + 1)
if i_index == -1: 
    print("NO")
    exit()

d_index = s.find("d", i_index + 1)
if d_index == -1:  
    print("NO")
    exit()

i_rindex = s.find("i", d_index + 1)
if i_rindex == -1:  
    print("NO")
    exit()


print("YES")
