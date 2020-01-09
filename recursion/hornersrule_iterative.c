#include<stdio.h>
int e(int x, int n)
{
    double s=1;
    for(;n>0;n--)
    {
        s=1+x/n*s;
    }
    return s;

}
int main()
{
    printf("%d",e(3,7));
}
