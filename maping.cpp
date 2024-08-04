#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>directory;
 directory["nishu"]=884005399;  //insertion o[logn]
 directory["nishuu"]=884005390;
 directory["nish"]=884005359;
 //for(auto i:directory){
   // cout<<"name-"<<i.first<<endl;
    //cout<<"phone-"<<i.second<<endl;

 //}
map<string,int>::iterator itr;
for(itr=directory.begin();itr!=directory.end();itr++){
    cout<<itr->first<<"-"<<itr->second<<endl;
}
map<string,int>::reverse_iterator it;
for(it=directory.rbegin();it!=directory.rend();it++){
    cout<<itr->first<<"-"<<itr->second<<endl;
}

 return 0;
}
