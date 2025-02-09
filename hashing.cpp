#include<iostream>
#include<list>
#include<vector>
using namespace std;

class hashing{
vector<list<int>>hashtable;
int buckets;
public:
hashing (int size){
    buckets = size;
    hashtable.resize(size);
}
int hashvalue(int key){
    return key%buckets;//division method
}
void addkey(int key){
    int idx=hashvalue(key);
    hashtable[idx].push_back(key);

}
list<int>::iterator search(int key){
    int idx=hashvalue(key);
  return find(hashtable[idx].begin(),hashtable[idx].end(),key);
}
void deletekey(int key){
    int idx=hashvalue(key);
    if(search(key)!=hashtable[idx].end()){
 hashtable[idx].erase(search(key));
 cout<<"is deleted"<<endl;
    }
    else{
        cout<<"not prrsent";
    }
   
   
}

};
int main(){
    hashing h(10);
    h.addkey(5);
    h.addkey(6);
    return 0;
}