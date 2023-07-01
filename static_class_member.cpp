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
        cout<<"The count is :"<<count<<"\n";
      }
};

int item :: count;

int main()
{
    item a(5);
    item b(7);
    a.getcount();
    item c(8);
    b.getcount();
}