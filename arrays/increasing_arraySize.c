#include<stdio.h>
int main()
{
    int *p, *q, i;
    p=(int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    q=(int *)malloc(10*sizeof(int));
    for(i=0;i<5;i++)
        q[i]=p[i];
    free(p);
    p=q;
    q=NULL;
    for(i=0;i<4;i++)
        printf("%d \n",p[i]);
    return 0;
}
