#include <bits/stdc++.h>
using namespace std;
 
int fun(int i,int n,vector<int>&v){
   if(i>=n){
      return INT_MIN;
   }
   int maxi=INT_MIN;
   maxi=max(maxi,v[i]);
   int res=fun(i+1,n,v);
   maxi=max(maxi,res);
return maxi;
}
 
 
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
      cin>>v[i];
    }
    cout<<fun(0,n,v);
}