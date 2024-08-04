#include<iostream>
using namespace std;
#include <stack>

class Queue{
stack<int>st;
 public:
 Queue(){

 }
 void push(int x){
this->st.push(x);
 }
 void pop(){
    stack<int>temp;
    while(this->st.size()>1){
        temp.push(st.top());
       this->st.pop();
    } //now the element size is one
    st.pop();
    while(!temp.empty()){
       this->st.push(temp.top());
        temp.pop();
        
           }

 }

 bool empty(){
    return this->st.empty();
 }

 int front(){
if(this->st.empty())
return -1;
 stack<int>temp;
    while(this->st.size()>1){
        temp.push(st.top());
       this->st.pop();
    } //now the element size is one
    int result=this->st.top();
    while(!temp.empty()){
       this->st.push(temp.top());
        temp.pop();

 }
 return result;
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