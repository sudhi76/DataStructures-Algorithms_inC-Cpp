#include<stdio.h>
struct array{
    int *A;
    int size;
    int length;
};
void show(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)

    printf("elements are: %d\n",arr.A[i]);
}
int main()
{
    struct array arr;
    int i,n;
    printf("enter size of array:");
    scanf("%d",&arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("enter number of elemets");
    scanf("%d",&n);

    printf("enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",arr.A[i]);
    arr.length=n;

    show(arr);
    return 0;
}
