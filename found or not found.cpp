#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }

    
    sort(v.begin(), v.end());

    while (k--) {
        ll target;
        cin >> target;
        ll lo = 0;
        ll hi = n - 1;
        bool found = false;

        while (lo <= hi) {
            ll mid = lo + (hi - lo) / 2;  
            if (v[mid] == target) {
                cout << "found" << endl;
                found = true;
                break;
            } else if (v[mid] < target) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        if (!found) {
            cout << "Not found" << endl;
        }
    }

    return 0;
}