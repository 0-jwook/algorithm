import collections

words = input()
check_word = collections.Counter(words)

cnt = 0
result = ''
mid = ''
for k, v in check_word.items():
    if v % 2 == 1:
        cnt += 1
        mid = k
        if cnt >= 2:
            print("I'm Sorry Hansoo")
            exit()

for k, v in sorted(check_word.items()):
    result += (k * (v // 2))

print(result + mid + result[::-1])
