#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        unordered_set<long long> s;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }

        long long k = s.size();
        while (!s.count(k))
        {
            s.insert(k);
            k++;
        }

        cout << k << "\n";
    }
    return 0;
}
