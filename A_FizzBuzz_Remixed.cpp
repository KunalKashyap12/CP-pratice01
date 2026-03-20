#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        long long n;
        cin >> n;

        long long b = n / 15;
        long long rem = n % 15;

        long long ans = b * 3 + min(rem + 1, 3ll);
        cout << ans << "\n";
    }
}