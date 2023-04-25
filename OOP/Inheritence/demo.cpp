#include<iostream>
using namespace std;
class base
{
    public:
    int id=0;
    string name=".";
};
class drived : public base
{
    int data;
    public:
    void set()
    {
        data=12345;
        id=1111;
        name="aatish";
    }
    void get()
    {
        cout<<id<<"  "<<name<<"  "<<data<<endl;
    }
};
int main()
{
    drived d1;
    d1.set();
    d1.get();
    cout<<d1.id;
    return 0;
}