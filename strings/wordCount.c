#include<stdio.h>
int main()
{

    char A[]="welcome to hello world";
    int i,wcount=1;
    for(i=0;A[i]!='\0';i++)
    {
       if(A[i]=="" && A[i-1]!="")
        wcount++;
    }
printf("word count is: %d",wcount);
return 0;
}

