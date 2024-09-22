n, k = map(int, input().split())
coinType = []
for i in range(n):
    coinType.append(int(input()))
coinType.reverse()
cnt = 0
for i in coinType:
    cnt += k//i
    k%=i
print(cnt)