from heapq import *

R = lambda: map(int, input().split())
(t,) = R()
while t:
    t -= 1
    h, n = R()
    (*a,) = zip([1] * n, R(), R())
    while h > 0:
        i, x, d = heappop(a)
        h -= x
        heappush(a, (i + d, x, d))
    print(i)
