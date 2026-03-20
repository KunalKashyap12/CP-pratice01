// https://codeforces.com/contest/2126/problem/A
# include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        // vector<int> vec;
        // int n,digits=INT_MAX;
        // cin >> n;
        // do{
        //    int rem = n%10;
        //    vec.push_back(rem);
        //    n /=10;
        // }while(n>0);
        // for(int val:vec){
        //     digits = min(digits,val);
        // }
        // cout << digits <<endl;
        string x;
        cin >> x;

        char smallestDigit = '9';
        for (char c : x) {
            smallestDigit = min(smallestDigit, c);
        }

        cout << smallestDigit << '\n';
    }

    return 0;
}