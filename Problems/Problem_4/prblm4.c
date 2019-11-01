#include<stdio.h>
#include<stdlib.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}
int summed(int a)
{
    int num = fact(a);
    int d,sum=0;
    while(num>0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    return sum;

}
void main(int argc, char** argv)
{
    printf("%d\n",fact(atoi(argv[1])));
    printf("%d\n",summed(atoi(argv[1])));
}