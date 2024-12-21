#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,k;
    cin>>n>>k;
    map<ll,ll>m;
    ll x;
    for(ll i=0;i<n;++i){
        cin>>x;
        m[x]=i+1;
    }
    if(m.size()<k){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(auto x:m){
            if(k>0){
                cout<<x.second<<" ";
                k--;
            }
        }
    }

}
