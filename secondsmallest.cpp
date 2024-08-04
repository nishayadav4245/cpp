#include<iostream>
#include <set>
using namespace std;
#include<vector>
int main(){
int n;
cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];

 }
 set<int>s;
 for(auto i:s){
    s.insert(i);
 }
 auto itr=s.begin();
 itr++;
 cout<<*itr;
return 0;
}


            