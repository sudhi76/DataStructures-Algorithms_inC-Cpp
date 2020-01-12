#include<stdio.h>
struct array{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("enter elements :\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
void append(struct array *arr, int x)
{
    if(arr->length<arr->length)
        arr->A[arr->length++]=x;
 }
void Insert(struct Array *arr,int index,int x)
 {
int i;
if(index>=0 && index <=arr->length)
 {
for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
}
int main()
{
struct Array arr1={{2,3,4,5,6},10,5};
Append(&arr1,10);
Insert(&arr1,0,12);
Display(arr1);
return 0;

}
