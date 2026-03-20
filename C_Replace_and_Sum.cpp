#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];

        // Step 1: DP (right to left)
        vector<long long> dp(n);
        dp[n-1] = max(a[n-1], b[n-1]);

        for(int i = n-2; i >= 0; i--) {
            dp[i] = max({a[i], b[i], dp[i+1]});
        }

        // Step 2: Prefix sum
        vector<long long> prefix(n);
        prefix[0] = dp[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + dp[i];
        }

        // Step 3: Answer queries
        while(q--) {
            int l, r;
            cin >> l >> r;
            l--; r--;

            long long ans = prefix[r];
            if(l > 0) ans -= prefix[l-1];

            cout << ans << " ";
        }

        cout << "\n";
    }

    return 0;
}