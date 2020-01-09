#include<stdio.h>
int e(int x,int n)
{
    static int p=1,f=1;
    int r;
    if(n==0)
    {
        return 1;
    }
    else
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
}
int main()
{
    int w;
    w=e(2,7);
    printf("%d",w);
}
