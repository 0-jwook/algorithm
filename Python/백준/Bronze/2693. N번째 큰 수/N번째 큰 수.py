a = int(input())
for i in range(a):
    d = list(map(int, input().split()))
    d.sort(reverse=True)
    print(d[2])
