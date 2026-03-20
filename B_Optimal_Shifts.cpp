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
        string s;
        cin >> s;
        vector<int> pos;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                pos.push_back(i); // 1 2 
        }

        int maxGap = 0;
        int m = pos.size();
        for (int i = 0; i < m; i++)
        {
            int cur = pos[i]; // 1
            int next = pos[(i + 1) % m]; // 2
            int gap = (next - cur - 1 + n) % n;  // 
            maxGap = max(maxGap, gap);
        }

        cout << maxGap << "\n";
    }
}
