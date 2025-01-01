n = int(input())
d = list(map(int, input().split()))
result = 0
for i in d:
    for j in d:
        result += (max(i ,j) - min(i ,j))

print(result)
