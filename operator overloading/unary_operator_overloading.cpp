#include <iostream>
using namespace std;

class value
{
    int a;
    int b;
    int c;
    public:
    value(int x,int y,int z)
    {
         a=x;
         b=y;
         c=z;
    }
    void operator -()
    {
        a = -a;
        b = -b;
        c = -c;
    }
    void output()
    {
        cout<<"a : "<<a<<"\n";
        cout<<"b : "<<b<<"\n";
        cout<<"c : "<<c<<"\n";
    }
};

int main()
{
   value s(2,-3,4);
   cout<<"'before\n";
   s.output();
   -s;
   cout<<"After\n";
   s.output();
   
}