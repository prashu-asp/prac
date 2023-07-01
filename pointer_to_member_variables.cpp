#include <iostream> 
using namespace std;

class item
{
    int l;
    public:
    void setter(int x)
    {
        l=x;
    }
};

int   main()
{
    item a; 
    a.setter(2);
        
}

