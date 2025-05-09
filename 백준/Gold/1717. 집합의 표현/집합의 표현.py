import sys
sys.setrecursionlimit(100000)
def find(parent, x):
    if parent[x] != x:
        parent[x] = find(parent, parent[x])
    return parent[x]

def union(parent, a, b):
    a = find(parent, a)
    b = find(parent, b)
    if a < b:
        parent[b] = a
    else:
        parent[a] = b


n, m = map(int, input().split())
parent = [0]*(n+1)

for i in range(0, n+1):
    parent[i] = i

for i in range(m):
    a, b, c = map(int, input().split())
    if a == 0:
        union(parent, b, c)
    elif a == 1:
        if find(parent, b) == find(parent, c):
            print("YES")
        else:
            print("NO")