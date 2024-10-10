import sys
input = sys.stdin.readline
a = int(input())
s = set()
for _ in range(a):
    inputs = input().split()
    b= inputs[0]
    if b == "add":
        s.add(int(inputs[1]))
    elif b == "remove":
        try:
            s.remove(int(inputs[1]))
        except:
            pass
    elif b == "check":
        if int(inputs[1]) in s: print(1)
        else: print(0)
    elif b == "toggle":
        if int(inputs[1]) in s: s.remove(int(inputs[1]))
        else: s.add(int(inputs[1]))
    elif b == "all":
        s = set([i for i in range(1,21)])
    elif b == "empty":
        s = set()
