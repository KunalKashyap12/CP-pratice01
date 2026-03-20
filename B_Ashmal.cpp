#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--){
        int size;
        cin >> size;
        vector<string> v(size);
        for(int i = 0;i<size;i++){
            cin >> v[i];
        }
        string s = "";
        for(int i = 0;i<size;i++){
            string front = v[i] + s;
            string back = s + v[i];
            s = min(front,back);
        }
        cout << s <<"\n" ;
    }
}
