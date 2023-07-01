#include <iostream>
using namespace std;


class item
{
     int l;
     static int count;
    public:
       item(int x)
       {
          l = x;
          count++;
      }

      void getcount()
      {
        cout<<"The count is :"<<count;
      }
      void printl()
      {
        cout<<"the length is :"<<l;
      }
};

int item :: count;

int main()
{   
    int n;
    cout<<"ener the number:";
    cin >>n;
    item a(n);
    item b(7);
    a.getcount();
    item c(8);
    b.getcount();
    cout<<"\n";
    a.printl();
}