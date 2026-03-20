// https://codeforces.com/problemset/problem/2167/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int itr;
    cin>>itr;
    for(int i=0;i<itr;i++){

    //     int a,b,c,d;
    //     cin>>a>>b>>c>>d;
    
    //     if(a==b&&b==c&&c==d){
    //         cout<<"YES"<<"\n";
    //     }else{
    //         cout<<"NO"<<"\n";
    //     }
    // }
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end());

    if (v[0] == v[3])
        cout << "YES\n";
    else
        cout << "NO\n";
    }
    return 0;
    
}