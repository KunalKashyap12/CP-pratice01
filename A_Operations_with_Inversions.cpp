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
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ops = 0;
        int pmax = 0;
        for(int i =1;i<n;i++){
           pmax = max(pmax,a[i-1]);
           if(pmax>a[i]) ops++;
        }
        cout << ops << "\n";

    }
    return 0;
}
