#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        string s;
        cin >> s;

        vector<int> pos;
        for(int i = 0; i < n; i++) if(s[i] == '0') pos.push_back(i + 1);

        cout << (int)pos.size() << '\n';
        for(auto& z : pos) cout << z << ' ';

        cout << '\n';
    }
 
    return 0;
}