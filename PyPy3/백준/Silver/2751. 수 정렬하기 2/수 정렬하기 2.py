a = int(input())
arr = []
for i in range(a):
    arr.append(int(input()))

arr.sort()
for i in range(a):
    print(arr[i])