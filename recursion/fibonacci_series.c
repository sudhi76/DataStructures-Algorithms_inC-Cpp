#include<stdio.h>
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-2)+fib(n-1);
}
int main()
{
    printf("%d\n",fib(6));
    return 0;
}
