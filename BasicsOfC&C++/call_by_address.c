#include<stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    a=30;
    b=80;
    swap(&a,&b);
    printf("%d %d",a,b);
}
