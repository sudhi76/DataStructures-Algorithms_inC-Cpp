
#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {
        fun(n-1); //head recursion
        printf("%d\n",n);
    }
}
int main()
{
    int r=10;
    fun(r);
}
