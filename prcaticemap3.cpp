#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>
int checklargestprefix(vector<int>v){
    unordered_map<int,int>m;
  int  prefixsum=0;
  int maximum=0;

    for(int i=0;i<v.size();i++){
        prefixsum+=v[i];
        if(prefixsum==0){
            maximum++;
        }
        if(m.find(prefixsum)!=m.end()){
             maximum=max(maximum,i-m[prefixsum]);
          
        }
        else{
            m[prefixsum]=i;
        }

    }
    return maximum;
}

int main(){
    int n;
    cin>>n;
  vector<int>v(n);
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }
  cout<<checklargestprefix(v)<<endl;
return 0;
}