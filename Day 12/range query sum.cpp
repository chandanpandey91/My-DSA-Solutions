#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> v(n);
    vector<long long> prefix_vec(n + 1, 0);

    for (long long i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (long long i = 1; i <= n; ++i) {
        prefix_vec[i] = prefix_vec[i - 1] + v[i - 1];
    }

    while (m--) {
        long long l, q;
        cin >> l >> q;
        cout << prefix_vec[q] - prefix_vec[l - 1] << endl;
    }

    return 0;
}
