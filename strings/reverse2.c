#include<stdio.h>
int main()
{
    int i,j;
    char A[]="welcome";
    char B[7];
    for(i=0;A[i]!='\0';i++)
    {

    }
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        B[j]=A[i];
    }
    B[j]='\0';
printf("%s",B);
return 0;
}
