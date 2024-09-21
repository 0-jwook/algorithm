
def sieve_of_eratosthenes(limit):
    primes = [True] * (limit + 1)
    primes[0] = primes[1] = False
    for i in range(2, int(limit ** 0.5) + 1):
        if primes[i]:
            for j in range(i * i, limit + 1, i):
                primes[j] = False
    return primes


def primes_in_range(start, end):
    sieve = sieve_of_eratosthenes(end)

    return [i for i in range(start, end + 1) if sieve[i]]

start, end = map(int, input().split())
result = primes_in_range(start, end)
for i in result:
    print(i)

