#include<stdio.h>
int main()
{
    char A[]="welcome";
    int i,vcount=0,ccount=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'||A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u')
        {
             vcount++;
        }

        else((A[i]>=65&&A[i]<=90)||(A[i]>=97&&A[i]<=122));
            {
                ccount++;
            }
    }
printf("vowels count is: %d",vcount);
printf("consonent count is: %d",ccount);
}
