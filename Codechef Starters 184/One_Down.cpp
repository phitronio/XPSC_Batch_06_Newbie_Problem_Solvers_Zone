#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int oneZero=0, zeroOne=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1' && t[i]=='0') oneZero++;
            if(s[i]=='0' && t[i]=='1') zeroOne++;
        }
        
        if(oneZero%2 or zeroOne){
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;

    }
}
