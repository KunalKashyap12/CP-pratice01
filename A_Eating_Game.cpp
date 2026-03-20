#include <bits/stdc++.h>
#include <math.h>
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
        vector<int> f(n);
        
        for(int a = 0;a<n;a++){
            cin >> f[a];
        }
        int maxx = 0;
        int count = 1;
        for(int i = 0;i<n;i++){
            maxx = max(maxx,f[i]);
        }
        for(int i = 0;i<n;i++){
            if(f[i] == maxx) count++;
        }

        cout << count-1 << endl;
    }
    
    
}