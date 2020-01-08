#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r={10,5};
    struct rectangle *p = &r;
    r.length=0;
    p->length=20;
}

