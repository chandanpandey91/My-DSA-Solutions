#include <bits/stdc++.h>
using namespace std;

void matrix_sum(int r, int c, vector<vector<int>>& ans, vector<vector<int>>& a, vector<vector<int>>& b) {
    if (r < 0 || c < 0) {
        return;
    }
    ans[r][c] = a[r][c] + b[r][c];
    if (c > 0) {
        matrix_sum(r, c - 1, ans, a, b);
    } else if (r > 0) {
        matrix_sum(r - 1, ans[0].size() - 1, ans, a, b);
    }
}

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(r, vector<int>(c));
    vector<vector<int>> b(r, vector<int>(c));
    vector<vector<int>> ans(r, vector<int>(c));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> b[i][j];
        }
    }

    matrix_sum(r - 1, c - 1, ans, a, b);

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
