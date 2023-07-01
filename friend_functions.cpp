#include <iostream>
using namespace std;



class item
{
    int l;
    int b;
    public:
    void setter(int x,int y)
    {
            l=x;
            b=y;
    }
     
    void output()
    {
        cout<<"Length : "<<l<<"\n";
        cout<<"breadth : "<<b<<"\n";
    }

    friend void area(item x);

};



void area(item x)
{    
    int ar; 
    ar = (x.l)*(x.b);
     cout<<"Area : "<<ar;
}

int main()
{
    item a;
    a.setter(5,1);
    area(a);
}