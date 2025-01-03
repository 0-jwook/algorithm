n = int(input())
d = []
for _ in range(n):
    d.append(int(input()))
d.sort()

answer = []
for i in d:
    answer.append(i*n)
    n-=1
print(max(answer))