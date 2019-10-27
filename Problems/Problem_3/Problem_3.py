def isPrime(n):
    if n == 2:
        return True

    # Even numbers above 2 can't be prime
    if n % 2 == 0:
        return False

    # All primes above 3 are neighbors of a multiple of 6
    if n>3 and (n+1) % 6 != 0 and (n-1) % 6 != 0:
        return False

    # For the rest, we check up to sqrt(n) for factors
    i = 3
    while i*i <= n:
        if n % i == 0:
            return False
        i+=2

    return True

def main():
    n = int(input())
    p = 2
    for i in range(n,0,-1):
        while not isPrime(p):
            p+=1
        p+=1
    print(str(n)+"th prime: "+str(p-1))

main()
