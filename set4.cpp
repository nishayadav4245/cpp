#include<iostream>
#include<string.h>
#include<set>
using namespace std;

bool checkallalpha(string s){
    if(s.length()<26){
        return false;
    }
    transform(s.begin(),s.end(),s.begin(),::tolower);
set<char>alphabets;
for(auto ch:s){
    alphabets.insert(ch);

}
return(alphabets.size()==26);

}


int main(){

   string input;
   cin>>input;
   if(checkallalpha(input)){
    cout<<"yes";
   }
   else
   cout<<"no";
   return 0; 
}