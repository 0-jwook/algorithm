a = int(input())
arr = []
for i in range(a):
    arr.append(list(map(int, input().split())))

for i in range(a):
    arr[i].reverse()

arr.sort()

for i in range(a):
    arr[i].reverse()

for i in range(a):
    print(arr[i][0], end=" ")
    print(arr[i][1])

