#include<iostream>
using namespace std;

class base
{
    protected:
    int x;
    public:
    base(int a): x(a) {};
};
class drived :public base
{
    protected:
    int y;
    public:
    
    drived(int b,int a):base(a),y(b){};
    void print()
    {
        cout<<x<<" "<<y;
    }
};
int main()
{
    drived d(4,5);
    d.print();
    return 0;
}