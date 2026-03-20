#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        
        if(n%4 == 0) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }

}