#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
unordered_set<int>s1;
s1.insert(3);
s1.insert(1);
s1.insert(2);
s1.insert(1);
//multiset time complexity  insert()-o(logn) , deletion -
//erase.value()-o(logn) ,erase(position)-o(logn) and erase(start pos,end pos)-o(n),find()-o(logn),count()-o(logn+k) lower_bound()and upper_bound()=0(logn)
//unordered_multiset-aloow duplicate values,values are not ordered ,values will be identified by itself,values cannot be modified 
//time complexities of unorderedmultiset -for single ele insert-avg=o(1) worst=o(n).multi ele-o(n)avg and o(n*(N+1)).deletion-erase()-o(1)avg and o(n)worst.count()-o(n){n is no.of occur}
//find=o(1)avg and o(n)worst

for(auto value:s1){
    cout<<value<<" ";
}

    return 0;
}
