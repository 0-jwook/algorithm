a = int(input())
for i in range(a):
    d = list(str(input()))
    n = 0
    for j in d:
        if j == "(":
            n+=1
        elif j == ")" and n == 0:
            n -= 1
            break
        else:
            n-=1
    if n == 0:
        print("YES")
    else:
        print("NO")