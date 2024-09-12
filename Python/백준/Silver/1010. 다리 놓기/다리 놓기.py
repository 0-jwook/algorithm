def pec (a):
    if a<1:
        return 1
    return a*pec(a-1)


n = int(input())
for i in range(n):
    a, b = map(int, input().split())
    result = pec(b)/(pec(a)*pec(b-a))
    print(int(result))