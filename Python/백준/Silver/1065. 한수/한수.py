a = int(input())
han = 0

for i in range(a+1):
    if i < 100:
        han = i
    elif i == 1000:
        break
    else:
        t = i
        arr = []
        while t>0:
            n = 0
            arr.append(t%10)
            t//=10
            n+=1
        if arr[0]-arr[1] == arr[1]-arr[2]:
            han+=1
print(han)