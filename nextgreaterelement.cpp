#include<iostream>
#include <stack>
#include<vector>
using namespace std;
vector<int>nge(vector<int>&arr){
    int n=arr.size();
    vector<int>output(n,-1);
    stack<int>st; 
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() and arr[i]>st.top()){
            output[st.top()]=arr[i];
            st.top();
        }
        st.push(i);
    }
    reverse(output.begin(),output.end());
     reverse(output.begin(),output.end());
    return output;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int k;
        cin>>k;
        v.push_back(k);
    }
    vector<int>res=nge(v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}