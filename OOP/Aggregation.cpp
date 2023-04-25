#include<iostream>
using namespace std;
class address
{
    public:
    string state;
    string country;
    address(string state,string country)
    {
        this->state=state;
        this->country=country;
    }
};
class people
{
    string name;
    public:
    address *a;
    people(string name,address *a)
    {
        this->name=name;
        this->a=a;
    }
    void print()
    {
        cout<<name<<endl;
        cout<<a->state<<endl;
        cout<<a->country<<endl;     
    }

};
int main()
{
    address a("bihar","india");
    people p("aatish",&a);
    p.print();
    return 0;
}