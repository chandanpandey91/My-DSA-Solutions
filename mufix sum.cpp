#include <bits/stdc++.h>
using namespace std;
 
int f(int i, int m, vector<int>& v) {
    if (m == 0) {
        return 0;
    }
    return v[i] + f(i - 1, m - 1, v);
}
 
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << f(n - 1, m, v) << endl;
    return 0;
}
