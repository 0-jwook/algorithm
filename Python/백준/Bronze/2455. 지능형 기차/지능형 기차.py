n = 0
max = 0
for i in range(4):
    a, b = map(int, input().split())
    n -= a
    if n > max: max = n
    n += b
    if n > max: max = n
print(max)

