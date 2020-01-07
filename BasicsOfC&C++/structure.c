#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r; //declaring structure
    r.length=10; //initializing structure variable
    r.breadth=20;
    printf("%d",r.length*r.breadth);
}
