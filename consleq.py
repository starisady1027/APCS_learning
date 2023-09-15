zl = [int(z) for z in input().split(",")]
t = int(input())
l = min(zl)
r = max(zl)
mid = (l+r)/2
while l<r:
    s = 0
    for i in zl:
        if (s>t): break
        a = i / l
        s += a
    l += 1

