a = int(input())
arr = []
for i in range(a):
    arr.append(input())
arr1 = list(set(arr))
arr1.sort(key=lambda x: (len(x), x))

for i in range(len(arr1)):
    print(arr1[i])

