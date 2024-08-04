#include<iostream>
#include <queue>
using namespace std;


//there is a advantage of ll queue over array que is that it is space efficient since  nodes are created for only elements that are passed into the function
int main(){
   queue<int>qu;
   qu.push(10); 
    qu.push(20); 
 qu.push(30);
  qu.push(40);
   qu.pop();
   while(!qu.empty()){
    cout<<qu.front()<<" ";
    qu.pop();
   } 
    return 0;
}