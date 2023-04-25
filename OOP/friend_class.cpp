#include<iostream>
using namespace std;

class A
{
    private:
    int private_variable;
    protected:
    int protected_variable;
    public:
    A(int a, int b)
    {
        private_variable=a;
        protected_variable=b;
    }
    friend class B;
};
class B
{
    public:
    void print(A a)
    {
        cout<<"Private variable of class A: "<<a.private_variable<<endl;
        cout<<"Protected variable of class A: "<<a.protected_variable<<endl;
    }
};
int main()
{
    A a(4,5);
    B b;
    b.print(a);
    return 0;
}