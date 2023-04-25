#include<iostream>
using namespace std;
class base
{
    public:
    virtual void print()
    {
        cout<<" this is base class "<<endl;
    }
    void show()
    {
        cout<<"base show function"<<endl;
    }
};
class drived : public base
{
    public:
    virtual void print()
    {
        cout<<" this is drived class "<<endl;
    }
    void show()
    {
        cout<<"drived show function"<<endl;
    }
};

int main()
{
    base *b;
    drived d;
    b=&d;
    b->print();
    b->show();
    return 0;
}