#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c;
    cin >> a >> b >> c;
    int maximum = max({a,b,c});
    int minimum = min({a,b,c});
    if((maximum - minimum) >= 10){
        cout << "check again" << "\n";
    }else{
         cout << "final " << a + b + c - minimum - maximum << "\n";
    }
}
 