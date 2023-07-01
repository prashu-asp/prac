#include<bits/stdc++.h>
using namespace std;


void print_list(list<int> &l)
{
      for(list<int>::iterator it = l.begin(); it!=l.end(); ++it)
      {
           cout<<*it<<"\t";
      }
      cout<<endl;
}


int main()
{

    list<int> nums = {1,2,3,4,5};
    print_list(nums);
    cout<<"Size = "<<nums.size()<<endl;
    

   

    cout<<"front = "<<nums.front()<<" back = "<<nums.back()<<endl;
    
    cout<<std::boolalpha <<nums.empty()<<endl;
    cout<<*nums.begin()<<" , "<<*nums.rbegin()<<endl;
   
   vector<int> v ={1,2,3,4};
    v.insert(v.begin() + 2 ,100);   // this is correct 

    // nums.insert(nums.begin() + 2,100 )//but this is wrong u cant perform this nums.begin() +2 in list.
    
    list<int>::iterator it = nums.begin();   // u can use auto it;  it automatically identifies the data type it is pointing to
    int count = 0;
    while(count!=3 && it!=nums.end())
    {
    it++;   //moving podition of "it" to next element
    count++;
    }

    //now current it is pointing to Node 4.
    
    nums.insert(it,100 );  //after insertion the 100 will be inserted before the node that "it" is currently pointing to i.e. before node 4. Even after insertion in list the "it" will be pointnig to node 4 only but not 100.  In vector the it points to 100 after insertion but here it will not because it is like linked list. They are noeds not jsut values.
    print_list(nums);  

    nums.erase(it);   // here u thought that 100 will be deleted but 4 is deleted because "it" is pointing to node 4 even though insertion happened it still points to node 4. 
    print_list(nums);

    nums.remove(100);
    print_list(nums);

     list<int>nums2 = nums;   //nums2 is just a copy of nums. nums2 will not point to nums;
    print_list(nums2);

    nums.clear();
    print_list(nums);  //nums will be gone
    print_list(nums2);  //nums2 will be there


    nums2.push_back(100);
    nums2.push_front(0);
    print_list(nums2);

    nums2.pop_back();
    nums2.pop_front();
    print_list(nums2);
   

    

    return 0;
}