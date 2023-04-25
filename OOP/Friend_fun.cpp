#include<iostream>
using namespace std;

class A
{
    private:
    int private_var=70;
    protected:
    int protected_var=45;
    public:
    friend void add(A &a) ;

};
void add(A &a)
{
    cout<<a.private_var<<endl;
    cout<<a.protected_var<<endl;
}
int main()
{
    A a;
    add(a);
    return 0;
}