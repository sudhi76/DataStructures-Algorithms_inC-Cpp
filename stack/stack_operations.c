#include<stdio.h>
struct stack {
    int size;
    int top;
    int *s;
};
void create(struct stack *st)
{
    printf("enter the size of stack");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*(sizeof(int)));
}
void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
        printf("%d",st.s[i]);
    printf("\n");
}
void push(struct stack *st, int x)
{
    if(st->top==st->size-1)
        printf("overflow");
    else
        st->top++;
    st->s[st->top]=x;
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
        printf("underflow condition");
    else
    {
        x=st->s[st->top--];
    }
    return x;
}
int main()
{
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    printf("%d\n",pop(&st));
    display(st);
    return 0;
}
