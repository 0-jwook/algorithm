d =[]
reslut = 0
for i in range(5):
    a = int(input())
    d.append(a)
    reslut += a

d.sort()
print(int(reslut/5))
print(d[2])