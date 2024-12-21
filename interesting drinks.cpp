#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while(q--){
        ll target;
        cin>>target;
        ll ans=upper_bound(v.begin(),v.end(),target)-v.begin();
        cout<< ans<<endl;

    }
return 0;
}
