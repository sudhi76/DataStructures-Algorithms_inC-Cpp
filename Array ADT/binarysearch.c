#include<stdio.h>
struct array{
    int A[10];
    int length;
    int size;
};
void display(struct array arr)
{
    int i;
    printf("elements are:\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int binarysearch(struct array arr, int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key=arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int Rbinarysearch(int A[],int l, int h, int key)
{
    int mid=0;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
           return Rbinarsearch(A,l,mid-1,key);
    }
        else
            return Rbinaryearch(A,h,mid+1,key);
        return -1;
    }

int main()
{
    struct array ar={{1,2,3,4,5,6,7,8},10,5};
    printf("%d",binarysearch(ar,5));
    display(ar);
    return 0;
}
