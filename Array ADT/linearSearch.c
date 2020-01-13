#include<stdio.h>
struct array{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\n elements are:\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
int linearsearch(struct array *arr, int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    struct array ar={{1,2,3,4,5,6,7,8},10,8};
    printf("%d",linearsearch(&ar,6));
    display(ar);
    return 0;
}
