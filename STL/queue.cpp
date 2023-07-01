
#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    queue<int> Q;
    
    cout<<std::boolalpha<<Q.empty()<<endl;
    
    for(int i=1;i<=5;i++)
    {
        Q.push(i);
    }
    
    Q.push(6);
    
    cout<<"front = "<<Q.front()<<" , back = "<<Q.back()<<endl;
    cout<<" size = "<<Q.size()<<endl;
    
    
    Q.pop();
    Q.pop();
    
    cout<<"front = "<<Q.front()<<" , back = "<<Q.back()<<endl;
    cout<<" size = "<<Q.size()<<endl;
    
    
    cout<<std::boolalpha<<Q.empty()<<endl;
    
    
 
    return 0;
}
