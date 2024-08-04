#include<iostream>
#include <set>
using namespace std;
int main(){
set<string>invitelist;
int n;
cin>>n;
 while(n--){
    string name;
    cin>>name;
    invitelist.insert(name);
 }
 for(auto i:invitelist){
    cout<<i<<endl;
 }

    return 0;
}