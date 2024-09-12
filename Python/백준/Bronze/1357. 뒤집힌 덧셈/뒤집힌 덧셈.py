a, b = map(int, input().split())
def f (a):
    return int(str(a)[::-1])

print(f(f(a)+f(b)))


