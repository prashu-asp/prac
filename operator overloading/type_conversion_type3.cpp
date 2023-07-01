// one class type to another class type

#include <iostream>
using namespace std;

class rupee
{
    int rvalue;

public:
    rupee()
    {
        rvalue = 0;
    }
    rupee(int x)
    {
        rvalue = x;
    }

    

    void setter(int x)
    {
        rvalue = x;
    }
    int get()
    {
       return rvalue;
    }
    void output()
    {
        cout << "rupee:" << rvalue;
    }
   
};


class dollar
{
    int dvalue;

public:
    dollar()
    {
        dvalue = 0;
    }
    dollar(int x)
    {
        dvalue = x;
    }

    

    int get()
    {
        return dvalue;
    }

    void setter(int x)
    {
        dvalue = x;
    }

    
    
    // dollar(rupee  p)
    // {
    //     dvalue = p.get();
    //     dvalue = dvalue/60;
    // }

    operator rupee()
    {   
        rupee k;
        dvalue = k.get()/60;
        return dvalue; 
    }

    void output()
    {
        cout << "dollar:" << dvalue;
    }
};



int main()
{
    rupee r(60);
    dollar d;
    d = r;
    d.output();
    
}



// #include <iostream>
// using namespace std;

// class invent2 ;

// class invent1{
//        int code;
//        int items;
//        float price;
//        public:
//        invent1(int a,int b,float c)
//        {
//         code = a;
//         items = b;
//         price =c;
//        }

//        void putdata()
//        {
//         cout<<"Code: "<<code << "\n";
//         cout<<"Code: "<<code << "\n";
//         cout<<"Code: "<<code << "\n";
//        }
//        int getcode()
//        {
//         return code;
//        }
//        int getitems()
//        {
//         return items;
//        }
//        float getprice()
//        {
//         return price;
//        }
//        operator float()
//        {
//         return(items*price);
//        }
// };


// class invent2
// {
//     int code;
//     float value;
//     public:
//     invent2()
//     {
//         code = 0;
//         value = 0;
//     }

//     invent2(int x,float y)
//     {
//         code =x;
//         value =y;
//     }
//     void putdata()
//     {
//         cout<<"Code : "<<code<<"\n";
//         cout<<"Value: "<<value <<"\n\n";
//     }

//     invent2(invent1 p)
//     {
//         code = p.getcode();
//         value = p.getitems() * p.getprice();
//     }

// };

// int main()
// {
//     invent1 s1(100,5,140.0);
//     invent2 d1;
//     float total_value;
//     total_value = s1;
//     d1 = s1;
//     cout << "product deails - invent1 type"<<"\n";
//     s1.putdata();
//     cout<<"\nStock value"<<"\n";
//     cout << "Value = "<<total_value<<"\n\n";
//     cout << "Product details-invent2 type"<< "\n";
//     d1.putdata();
//     return 0;
// }

