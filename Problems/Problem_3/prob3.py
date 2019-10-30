def prime(num):
    i = 2
    while(i*i<num+1):
        if(num%i==0):
            return -1
        i+=1    
    return 1

def nprime(x):
    if (x==1):
        return 2
    

    count = 1
    j = 3

    while(count != x):
        if(prime(j)==1):
            count += 1
        j += 2
    return j-2

n = int(input("Enter a value : "))
print(nprime(n))
