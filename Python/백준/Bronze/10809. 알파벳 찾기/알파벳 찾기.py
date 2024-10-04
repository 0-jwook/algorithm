a = input()
n = 96
arr = [-1]*27
num = 0
for i in a:
    if arr[ord(i)-97] == -1:
        arr[ord(i)-97] = num
    num+=1
for i in range(26):
    print(arr[i], end=" ")