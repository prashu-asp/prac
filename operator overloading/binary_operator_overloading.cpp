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
        img = 0;
    }
    complex(int x,int y)
    {
        real=x;
        img =y;
    }

    void output()
    {
        cout<<"Complex number:"<<real<<" + i"<<img;
    }
    
    complex operator +(complex s);  // it is a member fucntion so it ahas the acces to its own variables so passing only one argument is enough. Olease rethink if u didnt understand

};

complex complex :: operator +(complex c)
{
    complex t;
    t.real = real + c.real;
    t.img = img + c.img;
    return t;
}



int main()
{
    complex a(2,3);
    complex b(3,4);
    complex c;
    c = a+b;
    c.output();

}