// operator overloading
// complex number
#include<iostream>
using namespace std;
class complex
{
    int x;
    int y;
    public:
    void set(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    complex operator+ (complex &ptr)
    {
        complex temp;
        cout<<x<<" ptr "<<ptr.x <<endl;
        temp.x=x+ptr.x;
        temp.y=y+ptr.y;
        return temp;
    }
    void print()
    {
        cout<<x<<"  "<<y;
    }
};
int main()
{
    complex c1,c2;
    c1.set(1,2);
    c2.set(3,4);
    complex c3 = c1+c2;// c1.operator+(c2)
    c3.print();
    return 0;
}