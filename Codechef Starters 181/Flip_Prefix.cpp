#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        string s;
        cin >> s;
        int one=0, zero=0, cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1') one++;
            if(s[i]=='0') zero++;
            if(one==zero && (zero!=0)) cnt++;
        }
        int res = pow(2,cnt);
        cout << res << endl;
    }
}
