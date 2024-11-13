def f(n):
    if n == 1: return 1
    p = 1
    while p * 2 <= n:
        p *= 2
    if p == n:
        return n
    return (n-p)*2
n = int(input())
print(f(n))