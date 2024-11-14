import math
r, c = map(int, input().split())
print(math.comb(r - 1, c - 1))