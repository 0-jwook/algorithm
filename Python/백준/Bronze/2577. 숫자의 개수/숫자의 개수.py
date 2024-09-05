a = int(input())
b = int(input())
c = int(input())
d = str(a*b*c)
for i in range(10):
    count = 0
    for j in range(len(d)):
        if d[j] == str(i):
            count+=1
    print(count)