#include<iostream>
using namespace std;
#include <unordered_map>

//time complexity 0(n)
bool onetomanyfunction( string s1,string s2){

    unordered_map<char,char>m;
    for(int i=0;i<s1.length();i++){
     if(m.find(s1[i])!=m.end()){
     if(m[s1[i]]!=s2[i]){
        return false;
     }
     }
     else{
        m[s1[i]]=s2[i];
     }
    }
    return true;
}
bool strin(string s1, string s2){
if(s1.length()!=s2.length()){
    return false;
}
    //checking one to many from s1 to s2;
    bool s1s2= onetomanyfunction(  s1, s2);
    //checking one to many function from s2 to s1
 bool s2s1=onetomanyfunction(s2,s1);
 return s1s2 && s2s1;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<(strin(s1,s2)?"is isomorphic":"not isomorphic")<<endl;
return 0;
}