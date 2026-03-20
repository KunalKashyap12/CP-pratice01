#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        bool found = false;

        for(int i = 1; i < n; i++) {
            if((a[i] - a[0]) % 2 == 0) {
                cout << a[0] << " " << a[i] << "\n";
                found = true;
                break;
            }
        }

        if(!found)
            cout << -1 << "\n";
    }
}
