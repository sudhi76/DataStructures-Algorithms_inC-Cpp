#include<stdio.h>
int main()
{
    int A[4]={1,2,3,4};
    int *p,i,j;
    p=(int *)malloc(4*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=1;
    p[3]=2;

    //printing static arrays
    for(i=0;i<4;i++)
        printf("%d \n",A[i]);
    for(j=0;j<4;j++)
        printf("%d \n",p[j]);
    return 0;


}
