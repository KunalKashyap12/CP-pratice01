#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int l,r,d,u;
        cin >> l >> r >> d >>u;
        if(l == r && r == u && u == d) {
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}