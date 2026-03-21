#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<int> vis(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            if (vis[i]) continue;

            vector<int> idx;
            int j = i;

            while (j <= n) {
                idx.push_back(j);
                vis[j] = 1;
                j *= 2;
            }

            vector<int> vals;
            for (int x : idx) vals.push_back(a[x]);

            sort(vals.begin(), vals.end());

            for (int k = 0; k < idx.size(); k++) {
                a[idx[k]] = vals[k];
            }
        }

        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i + 1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
}
