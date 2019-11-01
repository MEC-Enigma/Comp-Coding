#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int power(int a, int b)
{
    int val=1;;
    while(b!=0)
    {
        val=val*a;
        b--;
    }
    return val;
}
int recurse(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return (power(recurse(n-1),n-1)+power(recurse(n-2),n-2));
    }
    
}
void main(int argc,char** argv)
{
    printf("%d\n",power(5,5));
    printf("%d\n",recurse(atoi(argv[1])));
}