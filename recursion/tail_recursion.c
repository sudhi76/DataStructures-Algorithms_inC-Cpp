#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {
        printf("%d\n",n);
        fun(n-1); //tail recursion
    }
}
int main()
{
    int r=10;
    fun(r);
}
