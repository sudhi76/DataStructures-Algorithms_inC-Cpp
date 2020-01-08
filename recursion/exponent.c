#include<stdio.h>
int pow(int a, int b)
{
    if(b==0)
        return 1;
    else
        return pow(a,b-1)*a;
}
int pow1(int a, int b)
{
    if(b%2==0)
        return pow(a*a,b/2);
    else
        return a*pow(a*a,(b-1)/2);

}
int main()
{
    int r;
    r=pow1(2,4);
    printf("%d",r);
    return 0;
}
