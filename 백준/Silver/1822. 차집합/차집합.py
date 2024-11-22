an, ab = map(int, input().split())
a = set(list(map(int, input().split())))
b = set(list(map(int, input().split())))
print(len(a-b))
for i in sorted(a-b):
    print(i, end=" ")