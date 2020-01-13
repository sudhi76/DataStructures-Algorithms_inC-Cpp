#include<stdio.h>
struct array{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
int delete(struct array *arr,int index)
{
    int x=0;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}
int main()
{
    struct array ar={{2,3,4,5,6},10,5};
    printf("%d",delete(&ar,2));
    display(ar);
    return 0;
}
