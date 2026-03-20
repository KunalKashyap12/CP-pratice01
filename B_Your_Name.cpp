#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--){
        int size;
        cin >> size;
        string s1,s2;
        cin >> s1 >> s2;
        int v[26] = {0};
        for(char c : s1){
            v[c-'a']++;
        }
        for(char c : s2){
            v[c-'a']--;
        }
        bool flag = true;
        for(int i = 0;i<26;i++){
            if(v[i] != 0){
                flag = false;
                break;  
            }   
        }
        if(flag){
            cout<< "YES\n";
        }
        else{
            cout<< "NO\n";
        }

        // time compelxity (nlogn)
        // int size;
        // cin >> size;
        // string s1,s2;
        // cin >> s1 >>s2;
        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        // if(s1==s2) cout << "YES\n";
        // else cout << "NO\n";
    }










}