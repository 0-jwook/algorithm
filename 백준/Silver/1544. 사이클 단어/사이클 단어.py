n = int(input())
d = set()
for _ in range(n):
    word = input()
    min_word = min(word[i:]+word[:i] for i in range(len(word)))
    d.add(min_word)
print(len(d))