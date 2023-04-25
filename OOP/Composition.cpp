#include<iostream>
using namespace std;

class engine
{
    public:
    int capicity;
    int weight;
    engine()
    {
        capicity=0;
        weight=0;
    }
    engine(int capicity,int weight)
    {
        this->capicity=capicity;
        this->weight=weight;
    }
};

class tyre
{
    public:
    int number;
    string quality;
    tyre()
    {
        number=0;
        quality="...";
    }
    tyre(int number,string quality)
    {
        this->number=number;
        this->quality=quality;
    }
};

class car
{
    string name;
    int price;
    engine e;
    tyre t;
    public:
    car(string name , int price , engine e , tyre t)
    {
        this->name=name;
        this->price=price;
        this->e=e;
        this->t=t;
    }
    void detail()
    {
        cout<<" Car "<<name<<endl;
        cout<<" Price "<<price<<endl;
        cout<<" Capicity "<<e.capicity<<endl;
        cout<<" Weight "<<e.weight<<endl;
        cout<<" No of tire "<<t.number<<endl;
        cout<<" Tyre name "<<t.quality;
    }
};

int main()
{
    engine e(40000 , 1000);
    tyre t(4,"mrf");
    car c("audi",7000,e,t);
    c.detail();
}