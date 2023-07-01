#include <iostream>
using namespace std;



class complex
{
    int real;
    int img;
    public:
    complex()
    {
        real = 0;
        img =0;
    }
    complex(int x, int y)
    {
        real = x;
        img = y;
    }

    void output()
    {
        cout<<"Complex number: "<<real<<" + i "<<img;
    }

    friend complex operator +(complex,complex); //declaration
};


complex operator +(complex x, complex y)
{
    complex z;
    z.real = x.real+y.real ;
    z.img = x.img + y.img ;
    return z;
} 

int main()
{
    complex a(2,3);
    complex b(3,4);
    complex c;
    c = a+b;
    c.output();
}

