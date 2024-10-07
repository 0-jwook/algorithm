price = int(input())
n = int(input())
result = 0
for i in range(n):
    a, b = map(int, input().split())
    result = result+(a*b)
if price == result:
    print("Yes")
else:
    print("No")