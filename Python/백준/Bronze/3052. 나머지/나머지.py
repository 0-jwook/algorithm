d = []
for i in range(10):
    a = int(input())
    if a%42 in d:
        continue
    else:
        d.append(a%42)

print(len(d))