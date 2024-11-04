#include <bits/stdc++.h>
using namespace std;

int rec(int i, vector<int>& v) {
    if (i >= v.size()) {
        return 0;
    }
    int sum = v[i];
    sum += rec(i + 1, v);
    return sum;
}

int main() {
   int n;
   cin >> n;
   vector<int> v(n);
   for (int i = 0; i < n; ++i) {
       cin >> v[i];
   }
   cout << rec(0, v) << endl;
}
