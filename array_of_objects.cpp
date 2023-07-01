#include <iostream>
using namespace std;

class employee
{
    int roll;
    int exp;
    public:
    // employee(int x,int y)
    // {
    //     roll=x;
    //     exp = y;
    // }

    void input();

    void output()
    {
        cout<<"roll:"<<roll<<"\n";
        cout<<"exp:"<<exp<<"\n";
    }
};

void employee :: input()
{
      cout<<"enter roll number:";
      cin>>roll;
      cout<<"enter experience:";
      cin>>exp;
}

int main()
{
    employee a[5];
    
    for(int i=0;i<6;i++)
    {
        a[i].input();
        
    }
    for(int i=0;i<6;i++)
    {
        a[i].output();
    }
   
}