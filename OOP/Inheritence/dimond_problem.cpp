// multiole inheritence 

#include<iostream>
using namespace std;
class A
{
    public:
    int x=1;
    A()
    {
        cout<<"a constructor is called"<<endl;
    }
};
class B : virtual public A
{
    public:
    B()
    {
        cout<<"b constructor is called"<<endl;
    }
};
class C : virtual public A
{
    public:
    C()
    {
        cout<<"c constructor is called"<<endl;
    }
};
class D: public B,public C
{
    public:
    D()
    {
        cout<<"d constructor is called"<<endl;
    }
};
int main()
{
    D d;
    cout<<d.x;
}