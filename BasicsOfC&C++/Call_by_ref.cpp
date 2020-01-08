#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a, b;
    a=10;
    b=60;
    swap(a,b);
    cout<<a<<endl;
    cout<<b;
}
