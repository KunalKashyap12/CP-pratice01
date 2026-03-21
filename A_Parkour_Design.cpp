#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        if ((x + y) % 3 == 0) {
            long long k = (x + y) / 3;
            if (k >= abs(y)) cout << "YES\n";
            else cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
}