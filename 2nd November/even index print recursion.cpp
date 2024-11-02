#include <bits/stdc++.h>
using namespace std;

void rec(int index,vector<int>&v){
    if(index>=v.size()) return;
    rec(index+2,v);
    cout<<v[index]<<" ";
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    rec(0,v);
}