//set is standard library template (stl) container used  to store unique values
//ualues are stores in ordered state(increasing and decreaing order)
//no indexing, elements are identified by thier values
//ONCE VALUE IS INSERTED IN ASET IT CANNOT BE MODIFIED
#include<iostream>
#include <set>
using namespace std;

int main(){
    set<int>set1;
    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
     set1.insert(5);
     set1.insert(4);
cout<<set1.size()<<endl; //traversing set
//set<int>::iterator itr;
//for(itr=set1.begin();itr!=set1.end();itr++){                    //method 1 of travrsal
  //  cout<<*itr<<endl;
  //  }
//deletion of element method1
//set1.erase(4); 
//deletion method2
 //auto itr=set1.begin();
 //advance(itr,3);
 //set1.erase(itr);

auto start_itr=set1.begin();
auto end_itr=set1.begin();
advance(end_itr,3);

set1.erase(start_itr,end_itr);

for(auto value:set1){             //method2 of traversal
    cout<<value<<" ";
}cout<<endl;

set1.erase(4);
    return 0;
}