#include<iostream>
using namespace std;
#include <stack>

class Queue{
stack<int>st;
 public:
 Queue(){

 }
 void push(int x){
    //time complexity of push pr=o(n)
stack<int>temp;
while(!this->st.empty()){
    temp.push(this->st.top());
    this->st.pop();
}
this->st.push(x);
while(!temp.empty()){
this->st.push(temp.top());
    temp.pop();

}
 }

 void pop(){
    //time complexity =o(1)
if(this->st.empty())
return;
this->st.pop();
 }

 bool empty(){
    return this->st.empty();
 }

 int front(){
//time complexity=o(1)
if(this->st.empty())
return-1;
return this->st.top();
 
 }

};


int main(){
Queue q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.pop();
while(!q.empty()){
cout<<q.front()<<" ";
q.pop();
}
return 0;
}