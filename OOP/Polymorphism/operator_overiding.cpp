#include<iostream>
using namespace std;

class base
{
    public:
    void fun1()
    {
        cout<<"base fun 1"<<endl;
    }
    void fun2()
    {
        cout<<"base fun 2"<<endl;
    }
};
class drived : public base
{
    public:
    void fun1()
    {
        cout<<"drived fun 1"<<endl;
    }
};

int main()
{
    base b;
    drived d;
    d.fun1();
    d.fun2();
    return 0;
}