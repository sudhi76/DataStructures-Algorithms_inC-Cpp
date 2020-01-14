#include<stdio.h>
int main()
{
    char A[]="madam";
    char B[6];
    int i,j;
    for(i=0;A[i]!=0;i++)
    {

    }
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        B[j]=A[i];
    }
    B[j]='\0';
    if(A[i]==B[j])
        printf("palindrome string");
    else
    printf("not palindrome");
    return 0;
}
