#include<stdio.h>
struct node{
    int data;
    struct node* next;
}*first=NULL;

void create(int A[0],int n)
{
    int i;
    struct node *t, *last;
    first= (struct node*)malloc(sizeof(struct node));
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
int search(struct node *p, int key)
{
    while(p)
    {
        if(key==p->data)
            return (p);
        p=p->next;

    }
    return NULL;
}
int main()
{
    struct node *temp;
    int key;
    int A[]={1,2,3,4,5,6,7};
    key = 7;
    create(A,7);

    temp =search(first,key);
    printf("%d",temp->data);
    return 0;

}
