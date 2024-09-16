result = 0
max = 100
for i in range(7):
    a = int(input())
    if a%2!=0:
        result+=a
        if a<max:
            max = a

if result == 0 and max == 100:
    print(-1)
else:
    print(result)
    print(max)
