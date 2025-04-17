#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, d;
        cin >> n >> k >> d;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n==k){
            cout << 0 << endl;
            continue;
        }
        sort(a.begin(),a.end());
        int ful_cirte_parbo = n-k;
        int ans=0;

        for(int i=0; i<ful_cirte_parbo; i++){
            int cnt = (d-1)/a[i];
            cnt++;
            ans+=cnt;
        }
        cout << ans << endl;
        
    }
}
