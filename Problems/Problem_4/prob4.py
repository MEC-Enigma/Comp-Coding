def fact(x):
    if (x == 1):
        return 1
    return x*fact(x-1)

def sumOfdig(n):
    sum = 0
    while (n>0):
        temp = n%10
        n = n//10
        sum += temp
    return sum

num = int(input("Enter a number : "))
print(sumOfdig(fact(num)))
