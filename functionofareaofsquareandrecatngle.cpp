#include<iostream>
using namespace std;
int area(int x)
{
    return x*x;
}
int area(int l,int b)
{
    return l*b;
}
int main()
{
    int a;
    a=area(4,7);
    cout<<a;
}