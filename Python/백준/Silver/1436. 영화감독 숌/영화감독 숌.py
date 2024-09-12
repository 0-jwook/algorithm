a = int(input())
cnt = 666
result = 0
while True:
    if str(cnt).find("666") != -1:
        result+=1
        if result==a:
            print(cnt)
            break

    cnt+=1

