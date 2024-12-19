#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> arr[i];
        }

        int q;
        cin >> q;
        while (q--) {
            vector<int> q1(5);
            for (int i = 1; i <= 4; ++i) {
                cin >> q1[i];
            }

            if (q1[1] == 1) {
                arr[q1[2]] = q1[3];
            } else if (q1[1] == 2) {
                bool found = false;
                for (int i = q1[2]; i <= q1[3]; ++i) {
                    if (arr[i] <= q1[4]) {
                        cout << i << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}
