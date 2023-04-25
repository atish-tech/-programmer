// virtual function 
// run time polymorphism
// function overiding
#include<iostream>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout<<"base class"<<endl;
    }
};

class drived :public base
{
    public:
    void print()
    {
        cout<<"drived class"<<endl;
    }
};

int main()
{
    base b;
    drived d;
    b.print();
    d.print();
    base *ptr=&d;
    ptr->print();
    return 0;
}