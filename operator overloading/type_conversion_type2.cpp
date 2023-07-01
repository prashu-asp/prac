// class type to basic type


/*
basic syntax:

class x
{


.....
.....
....

operator typeame()
{
    //function body
}

};

int main()
{
       x a;
       int t;
       t = a;
}


*/


#include <iostream>
#include <cmath>
using namespace std;

class vector
{
    int coor[3];
    public:
    vector(int x1=0,int x2=0,int x3=0)
    {
        coor[0]=x1;
        coor[1]=x2;
        coor[2]=x3;
    }
    operator float()
    {
        float mag=0;
        for (int i=0;i<3;i++)
        {
            mag = mag + (coor[i]*coor[i]);
        }

        return sqrt(mag);
        
    }
};


int main()
{
       vector v(2,3,4);
       float f;
       f = v;   // u can use this also : "" f = float(v); "
       cout<<v;
}

