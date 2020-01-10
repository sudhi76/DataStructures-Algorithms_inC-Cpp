#include<stdio.h>
int main()
{
    int A[6]={1,2,3,4,5};
    int B[]={1,2,3,4};
    int c[4]={0};
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d",A[i]);
        printf("%u \n",&B[i]);
        printf("%d",c[i]);
        return 0;

    }


}

