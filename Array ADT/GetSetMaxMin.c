#include<stdio.h>
struct array{
    int a[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    printf("\nelements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.a[i]);
}
void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int get(struct array arr,int index)
{
    if(index>=0 && index<arr.length)
        return arr.a[index];
    return -1;

}
int set(struct array arr, int x, int index)
{
    if(index>=0 && index<arr.length)
        return arr.a[index]=x;
}
int max(struct array arr)
{
    int i;
    int max=arr.a[0];
    for(i=1;i<arr.length;i++)
    {
        if(max<arr.a[i])
            max=arr.a[i];
    }
    return max;
}
int min(struct array arr)
{
    int i;
    int min=arr.a[0];
    for(i=1;i<arr.length;i++)
    {
        if(min>arr.a[i])
            min=arr.a[i];
    }
    return min;
}
int sum(struct array arr)
{
    int i,sum=0;
    for(i=0;i<arr.length;i++)
        sum=sum+arr.a[i];
    return sum;

}
int main()
{
    struct array ar={{1,2,3,4,5,6,7},10,5};
    //printf("%d",min(ar));
    //printf("%d",max(ar));
    printf("%d",sum(ar));
    display(ar);
    return 0;
}
