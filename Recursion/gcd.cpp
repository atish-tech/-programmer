#include<iostream>
using namespace std;
int GCD(int a,int b)
    {
        //Your code here
        // int n=min(a,b);
        if((a%a==0) && (b%a==0))
            return a;
        GCD(a-1,b-1);
    }
int main()
{
    cout<<GCD(25,90);
    return 0;
}