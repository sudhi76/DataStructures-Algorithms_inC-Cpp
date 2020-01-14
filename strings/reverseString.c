#include<stdio.h>
int main()
{
    int i,j,t;
    char A[]="welcome";
    for(j=0;A[j]!='\0';j++)
    {

    }
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
printf("%s",A);
return 0;
}
