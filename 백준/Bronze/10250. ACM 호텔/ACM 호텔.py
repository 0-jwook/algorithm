N = int(input())
for _ in range(N):
    h, w ,n = map(int, input().split())
    cmd = 0
    gh = 1

    for _ in range(n):
        if cmd == h:
            gh += 1
            cmd = 1
            continue
        cmd += 1
    print(f"{cmd}{gh:02}")
   