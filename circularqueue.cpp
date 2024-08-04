#include<iostream>
#include <vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int>v;
    int cs;
    int ts;
    public:
    Queue(int n){
        v.resize(n);
        this->front=0;
        this->back=n-1;
    }

    void enqueue(int data){
        if(isfull())return;
       this->back=(this->back+1)%this->ts;
    }

    void dequeue(){
        if(this->front==this->back){
       this->front=-1;
       this->back=-1;
       v.clear();
        }
        else
        this->front++;

    }
    int getfront(){
        if(this->front==-1)
        return -1;
        else 
        return this->v[this->front];
    }
    bool isempty(){
        return 
        this->front==-1;

    }
    bool isfull(){
        return this->cs
    }
   
};

int main(){
Queue qu;
qu.enqueue(10);
qu.enqueue(20);
qu.enqueue(30);
qu.dequeue();
qu.enqueue(40);

while(not qu.isempty()){
    cout<<qu.getfront()<<" ";
 qu.dequeue();
}
    return 0;
}