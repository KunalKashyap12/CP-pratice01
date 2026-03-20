#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int l,a,b;
        cin >> l >> a >>b;
        int maxprize = 0;
        for(int i = 1;i<=l;i++){
            int step = (a + i*b)%l;
            maxprize = max(maxprize,step);
        }

        cout << maxprize <<"\n";



    }


}