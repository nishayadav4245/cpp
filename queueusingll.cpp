#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};
class Queue{
    Node* head;
    Node*tail;
    int size;
    public:
    Queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }

    void enqueue(int data){
Node* newnode=new Node(data);
if(this->head==NULL){
    //it is empty
    this->head=this->tail=newnode;
}
else{
  this->tail->next=newnode;
  this->tail=newnode;  
}
this->size++;
    }
    void dequeue(){
        if(this->head==NULL){
return;
        }
        else{
            Node*currhead=this->head;
            Node*newhead = this->head->next;
            this->head=newhead;
            if(this->head==NULL) this->tail=NULL;
            currhead->next=NULL;
            delete currhead;
        }
    }
    int getsize(){
        return this->size;
    }
    bool isempty(){
        return this->head==NULL;
    }
    int front(){
    if(this->head==NULL)return-1;
    return this->head->data;    
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
    cout<<qu.front()<<" ";
 qu.dequeue();
}
return 0;
}