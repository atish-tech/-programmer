#include<iostream>
using namespace std;

class company
{
    public:
    string id;
    string name;
    company(string name, string id)
    {
        this->id=id;
        this->name=name;
    }
};
class people
{
    string name;
    int age;
    public:
    people(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    string company_name;
    string company_id;
    void set(company *c)
    {
        company_name=c->name;
        company_id=c->id;
    }
    void print()
    {
        cout<<" Name "<<name<<endl;
        cout<<" Age "<<age<<endl;
        cout<<" Company "<<company_name<<endl;
        cout<<" ID "<<company_id<<endl;
    }
};

int main()
{
    company c("atish.tech","877660");
    people p("manisha",19);
    p.set(&c);
    p.print();
    return 0;
}