#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int n,s,x;
        cin >> n >> s >> x;
        vector<int> v(n);
        for(int i = 0;i<n;i++){
            cin >> v[i];
        }
        int sum  = 0;
        for(int j = 0;j<n;j++){
            sum += v[j];
        }
        bool flag = true;
        while(sum<=s){
            if (sum == s){
                cout << "YES" << endl;
                flag = false;
            } 
            sum += x;
        }
        if(flag) cout << "NO" << endl; 
    }
}