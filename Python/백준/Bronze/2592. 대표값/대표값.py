d =[]
reslut = 0
for i in range(10):
    a = int(input())
    d.append(a)
    reslut += a

d.sort()
print(int(reslut/10))
print(max(set(d), key = d.count))