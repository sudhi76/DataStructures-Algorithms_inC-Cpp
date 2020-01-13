#include<stdio.h>
struct array{
    int A[10];
    int length;
    int size;
};
void display(struct array arr)
{
    int i;
    printf("\nelements are:\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void reverse(struct array *arr)
{
    int *B;
    int i,j;
    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
        B[j]=arr->A[i];
    for(i=0;i<arr->length;i++)
        arr->A[i]=B[i];

}
void reverse2(struct array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}
int main()
{
    struct array ar={{1,2,3,5,6,7,8},10,5};
    reverse(&ar);
    display(ar);
    return 0;
}
