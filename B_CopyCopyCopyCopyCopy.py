t = int(input())

for _ in range(t):
    n = int(input())
    li = list(map(int,input().split()))

    li = set(li)
    print(len(li))