#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        int mx = 0;
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
            mx = max(mx, mp[a[i]]);
        }
        int ans = min(n-mx+1, n-mp[1]) ;
        cout << ans << endl;
    }
}
