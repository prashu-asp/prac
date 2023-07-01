
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> v = {1,3,5,7,9,11};
    auto it = v.begin() + 4; //5;
    
    cout<<"*it = "<<*it<<endl;
    cout<<"it - v.begin() = "<<it - v.begin()<<endl;  //it at index 4 and v.begin() at index 0 so 4-0 = 0; a
    
    // v.insert(it,100); //it is at index 4 and 100 will be inserted before 4 i.e   this 100 becomes index 4 value
    // cout<<"*it = "<<*it<<endl;
    // cout<<"it - v.begin() = "<<it - v.begin()<<endl;
    // cout<<"V[4]: "<<v[4]<<endl;
    
    // cout<<"here we are getting wrong results because after insert/delete (updation) the iterator becomes invalid.";
    // cout<<"to get correct iterator do as shown."<<endl; 
    
    
    it = v.insert(it,100); //it is at index 4 and 100 will be inserted before 4 i.e   this 100 becomes index 4 value
    cout<<"*it = "<<*it<<endl;
    cout<<"it - v.begin() = "<<it - v.begin()<<endl;
    cout<<"V[4]: "<<v[4]<<endl;
    
    return 0;
}
