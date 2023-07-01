#include <iostream>
using namespace std;

class item
{
       int l;
       int  b;
       public:
       item()   //default constructor
       {
        l=0;
        b=0;
       }
       item(int x, int y)   //parametrised constructor
       {
        l=x;
        b=y;
       }
       item( item &i);        //copy constructor declaration

       void output()
       {
        cout<<"Length: "<<l<<"\n";
        cout<<"Breadth : "<<b<<"\n";
       }



};

item :: item(item &i)        //copy constructor defination
{ 
    l = i.l;
    b=i.b;
}

int main()
{
    item a;
    item b(2,3);
    item c(b);     //creating c using copy constructor
    item d = a;     //creating d using copy constructor

    a.output();
    b.output();
    c.output();
    d.output();
}
