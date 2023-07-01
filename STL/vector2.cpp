
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
   vector<int> v = {1,2,3};
   cout<<"size = "<<v.size() << " , capacity = "<<v.capacity()<<endl;
   cout<<v.max_size()<<endl;
   v.push_back(5);
   cout<<"size = "<<v.size()<<" , capacity = "<<v.capacity()<<endl;
   int cap =v.capacity();
   for(int i=0;i<100;i++)
   {
       v.push_back(i);
       if(cap != v.capacity())
       {
        cap = v.capacity();
        cout<<"capacity = "<<cap<<endl;
       }
   }

   cout<<v[104]<<endl; //our vector has 104  {1,2,3,5,1,2,3....99} elements but here we are accessing 10th element but no error will come it will print some value.
//    cout<<v.at(104)<<endl ;  //this will give error because .at() has bound exception but v[] doesnt have bound exception.

   cout<<"front = "<<v.front()<<" back = "<<v.back() << endl;
   v.insert(v.begin()+2 , -100);  //{1,2,-100,5,1,2,3.....99}
   cout<<v[2]<<endl;


   list<int> l = {-100,-200,-300};
   v.insert(v.begin(), l.begin(),l.end());   //at v.begin() insert element of list l from begin to end;
   cout<<v[0]<<", "<<v[1]<<", "<<v[2]<<endl;  //{-100,-200.-300,1,2,-100,5,1,2,3....99}
   

   v.insert(v.begin(), 3,0);   //at v.begin() insert 0 five times
   cout<<v[0]<<", "<<v[1]<<", "<<v[2]<<endl;  //{0,0,0,-100.....}

   v.erase(v.begin(),v.begin()+3);   //v.begin() is inclusive and v.begin()+3 is exclusive
   cout<<v[0]<<", "<<v[1]<<", "<<v[2]<<endl;  //{1,2,-100,5,1,2,3....99}
   
   cout<<"size before resizing: "<<v.size()<<endl;
   v.resize(200);  // u can reduce the size;
   cout<<"size after resizing: "<<v.size()<<endl;
   
   return 0;
}
