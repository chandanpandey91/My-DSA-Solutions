#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll test;
    cin >> test;
    while (test--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; ++i) {
            cin >> v[i];
        }

        for (ll i = 0; i < n; ++i) {
            for (ll j = i; j < n; ++j) {
                ll maxi = LLONG_MIN;
                for (ll k = i; k <= j; ++k) {
                    maxi = max(maxi, v[k]);
                }
                cout << maxi << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}
