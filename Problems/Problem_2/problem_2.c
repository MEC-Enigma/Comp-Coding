#include <stdio.h>
#include <math.h>

int fibonacci(int n){
    if (n==1 || n==2){
        return n-1;
    }
    else{
        return pow(fibonacci(n-1),n-1) + pow(fibonacci(n-2),n-2);
    }
}

int main(void){
    int N;
    printf("\nRecursive fibonacci relation = f(n) = f(n-1)^(n-1) + f(n-2)^(n-2)\n\n");
    printf("Please enter a number (Nth term of the sequence): ");
    scanf("%d", &N);
    int result;
    result = fibonacci(N);
    printf("f(%d) = %d\n", N, result);

    return 0;
}
