n = int(input())
size = list(map(int, input().split()))
t, p = map(int, input().split())
result = 0
for i in range(6):
    if size[i] == 0:
        continue
    size[i] -= t
    if size[i] >0:
        while True:
            size[i] -= t
            if not(size[i] > 0):
                result+=1
                break
            result+=1
    result+=1

print(result)
print(n//p, end=' ')
print(n%p)
