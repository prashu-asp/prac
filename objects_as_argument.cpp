#include <iostream>
using namespace std;

class complex{

    int real;
    int img;
    public:
    void assign(int x,int y)
    {
        real = x;
        img = y;
    }



  

    void output()
    {
        cout<<"Complex number: "<<real<<" + i"<<img;
    }

    void sum(complex ,complex );

};


void complex :: sum(complex x, complex y)
{
    
    real = x.real + y.real;
    img = x.img + y.img;
    
    
    
    
}

int main()
{
    complex a,b,c;
    a.assign(2,3);
    b.assign(3,4);
    c.sum(a,b);
    c.output();
}

