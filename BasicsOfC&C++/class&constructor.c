#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle()
    {
        length=breadth=1
    }
    rectangle(int l, int b)
    int area();
    int perimeter();
    int get length()
    {
        return lenth;
    }
    void setlength(int l)
    {
        length=l;
    }
    `rectangle();
};
rectangle:: rectangle(int l, int b)
{
    length=l;
    breadth=b;
}
int rectangle::area()
{
    return length * breadth;
}
int rectangle:: perimeter()
{
    return 2*(length+breadth);
}
rectangle::`rectangle()
{

}
int main()
{
    rectangle r(10,5);
    cout<<r.area()
    cout<<r.perimeter();
    cout<<r.getlength();
}
