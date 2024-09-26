a = int(input())
arr = []
for i in range(a):
    d = int(input())
    if d == 0:
        arr.pop()
    else:arr.append(d)
print(sum(arr))
