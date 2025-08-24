#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s="abc", ans="";
        while(ans.size()<=n){
            ans+=s;
        }
        cout << ans.substr(0,n) << endl;
    }
}
