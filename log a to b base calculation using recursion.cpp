#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll lg2(ll a, ll b){
    if(a > b-1) return 1 + lg2(a/b,b);
    return 0;
}

void solve(){
    ll n;
    cin >> n;
    cout<< lg2(n,2);
}

int main(){
    solve();
}
