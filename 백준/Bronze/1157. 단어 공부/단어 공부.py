words = input().upper()
words_list = list(set(words))
lst=[]
for i in words_list:
    count = words.count(i)
    lst.append(count)
if lst.count(max(lst))>= 2:
    print("?")
else:
    print(words_list[lst.index(max(lst))])
   