def pec (a):
    if a<1:
        return 1
    return a*pec(a-1)

a, b = map(int, input().split())
print(int(pec(a)/(pec(b)*pec(a-b))))