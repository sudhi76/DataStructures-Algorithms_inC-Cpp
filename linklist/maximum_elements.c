#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first=NULL;
void create(int a[], int n)
{
    int i;
    struct node  *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=0;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
int max(struct node *p)
{
    int max=97864;
    while(p)
    {
       if(p->data>max);
        max=p->data;
        p=p->next;
    }
    return max;

}
int main()
{
    int a[]={3,5,7,3,50,59,70};
    create(a,7);
    printf("max %d\n",max(first));
    return 0;
}
