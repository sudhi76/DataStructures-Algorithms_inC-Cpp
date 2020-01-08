#include<stdio.h>
struct rectangle{
    int length;
    int breadth;
};
int area(struct rectangle r1)
{
    return r1.length*r1.breadth;
}
int main()
{
    struct rectangle r ={10,60};
    printf("%d",area(r));
}
