n, m = map(int, input().split())
d = list(range(1, n+1))
idx = 0
result = []
while d:
    idx = (idx + m -1 ) % len(d)
    result.append(str(d.pop(idx)))
print("<" + ", ".join(result) + ">")