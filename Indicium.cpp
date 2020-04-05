#include <bits/stdc++.h>

using namespace std;

int mat[60][60], n, k, t;
bool row[60][60], col[60][60], s;

void solve(int ro, int co, int m) {
    if (ro == n && co == n + 1 && m == k && !s) {
        s = true;
        cout << "Case #" << t << ": " << "POSSIBLE\n";
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    } else if (ro > n) {
        return;
    } else if (co> n) {
        solve(ro + 1, 1, m);
    }
    for (int i = 1; i <= n && !s; ++i) {
        if (!row[ro][i] && !col[co][i]) {
            row[ro][i] = col[co][i] = true;
            if (ro == co) {
                m += i;
            }
            mat[ro][co] = i;

            solve(ro, co + 1, m);

            row[ro][i] = col[co][i] = false;
            if (ro == co) {
                m -= i;
            }
            mat[ro][co] = 0;
        }
    }
}

int main() {
    int m;
    scanf(" %d", &m);
    for (t = 1; t <= m; ++t) {
        scanf(" %d %d", &n, &k);
        solve(1, 1, 0);
        if (!s) {
            cout << "Case #" << t << ": " << "IMPOSSIBLE\n";
        }
        s = false;
    }
    return 0;
}
