def fibo(n):
	if (n==1 or n==0):
		return n-1
	return (fibo(n-1)**(n-1) + fibo(n-2)**(n-2))

x = int(input("Enter a number : "))
print(fibo(x))