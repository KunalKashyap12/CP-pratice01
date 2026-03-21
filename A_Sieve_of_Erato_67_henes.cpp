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
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        bool f = false;
        for(int i = 0;i<n;i++){
            if(v[i] == 67){
                f = true;
                break;
            } 
        }
        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}