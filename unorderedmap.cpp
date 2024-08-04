#include<iostream>
using namespace std;
#include<unordered_map>
//creation of unordered map
int main(){
unordered_map<int,string>m;
m.insert(make_pair(1,"nishu"));
m.insert(make_pair(2,"pushu"));
for(auto pair:m){
    cout<<"roll no="<<pair.first<<endl;
        cout<<"name="<<pair.second<<endl;

}

    return 0;
}