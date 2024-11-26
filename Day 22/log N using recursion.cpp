#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int logcal(int n) {
    if (n > 1) return 1 + logcal(n / 2); 
    return 0 ;
}

int main() {
    ll n;
    cin >> n;
    cout << logcal(n);
}
