#include<stdio.h>
int e(int x, int n)
{
    static double s=1;
    if(n==0)
        return s;
    else
        s=s+x/n*s;
    return e(x,n-1);
}
int main()
{
    printf("%d",e(3,7));
}
