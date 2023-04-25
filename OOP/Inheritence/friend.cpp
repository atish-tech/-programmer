// friend function example

#include<iostream>
using namespace std;

class demo
{
    private:
    int age;
    string name;
    friend class printer;
    public:
    demo(int age,string name)
    {
        this->age=age;
        this->name=name;
    }
};
class printer
{
    public:
    void print(demo &d)
    {
        cout<<d.age<<"  "<<d.name;
    }   
};
int main()
{
    demo d(18,"aatish");
    printer p;
    p.print(d);
    return 0;
}