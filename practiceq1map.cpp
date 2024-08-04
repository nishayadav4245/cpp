#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>
//check for equal string
bool isequal(vector<string>&v)
{
    int n=v.size();
  unordered_map<char,int>m;
  for(auto str:v){
    for(auto c:str){
        m[c]++;
    }
  }
  for(auto ele:m){
    if(ele.second%n!=0){
        return false;
    }
  }
 return true;
    
}
int main(){
int n;
cin>>n;
vector<string>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<(isequal(v)?"yes":"no")<<endl;


    return 0;
}