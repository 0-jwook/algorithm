while True:
    a = int(input())
    if a == 0: break
    a = str(a)
    if a == a[::-1]: print('yes')
    else: print('no')