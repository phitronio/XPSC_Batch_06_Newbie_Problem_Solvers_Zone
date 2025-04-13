#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<vector<int>>a(n, vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        vector<ll>diff{1, -1};
        ll ans = n*m;
        for(auto rd:diff){
            for(auto cd : diff){
                map<ll,ll>freq;
                for(ll i=0; i<n; i++){
                    for(ll j=0; j<m; j++){
                        freq[a[i][j] - i*rd - j*cd]++;
                    }
                }
                ll mx = 0;
                for(auto val : freq){
                    mx = max(mx, val.second);
                }
                ans = min(ans, n*m - mx);
            }
        }
        cout << ans << endl;
    }
}
