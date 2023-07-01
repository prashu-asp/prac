// Basic type to class type

#include <iostream>
using namespace std;


class time
{
    int hours;
    int minutes;
    public:
    
    time(int t)
    {
        hours = t/60;
        minutes = t%60;
    }
    void showtime()
    {
        cout<<"Time : "<<hours<<" : "<<minutes;
    }
};

int main()
{   
    int t =85;
    time t1 = t;
    t1.showtime();

}
