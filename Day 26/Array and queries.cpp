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
            int type;
            cin >> type;

            if (type == 1) {
                int L, X;
                cin >> L >> X;
                arr[L] = X;
            } else if (type == 2) {
                
                int L, R, X;
                cin >> L >> R >> X;
                bool found = false;
                for (int i = L; i <= R; ++i) {
                    if (arr[i] <= X) {
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
