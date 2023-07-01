
#include <iostream>
#include<deque>  //this is important
using namespace std;
 
int main()
{
    deque<int> d= {1,2,3,4,5};
    
    cout<<"size: "<<d.size()<<endl;
    cout<<"Third element : "<<d[2]<<endl;
    cout<<"front element: "<<d.front()<<endl;
    cout<<"Back element: "<<d.back()<<endl;
    
    
    for(deque<int>::iterator it = d.begin(); it != d.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
 
    for(deque<int>::reverse_iterator it = d.rbegin(); it != d.rend();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    d.push_back(100);
    d.push_back(200);
    
    d.push_front(-100);
    
     for(deque<int>::iterator it = d.begin(); it != d.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    d.pop_back();
    d.pop_front();
    
     for(deque<int>::iterator it = d.begin(); it != d.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    d.clear() ; //empties deque
    
    for(deque<int>::iterator it = d.begin(); it != d.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
    cout<<"end";
 
    return 0;
}
