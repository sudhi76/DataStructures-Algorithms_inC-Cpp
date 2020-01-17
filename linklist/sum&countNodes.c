#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=0;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
int count(struct node *p)
{
    int l;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;

}
int Rcount(struct node *p)
{
    if(p!=NULL)
        return Rcount(p->next)+1;
        else
        return 0;
}
int sum(struct node *p)
{
    int s=0;
    while(p!=NULL)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}
int Rsum(struct node *p)
{
    if(p==NULL)
        return 0;
    else
        return Rsum(p->next)+p->data;
}
int main()
{
    int A[]={1,2,3,4,5,6};
    create(A,7);
    printf("count %d\n",count(first));
    printf("sum %d\n",sum(first));
    return 0;
}
