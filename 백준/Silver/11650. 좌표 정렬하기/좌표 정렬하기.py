n = int(input())
d = []
for _ in range(n):
    d.append(list(map(int, input().split())))
d.sort()
for i in range(n):
    print(d[i][0], d[i][1])