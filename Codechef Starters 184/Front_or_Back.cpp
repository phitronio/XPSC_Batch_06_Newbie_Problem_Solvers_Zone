#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n), cnt(n,0);
        for(int i=0; i<n; i++){
            cin >> a[i];
            cnt[a[i]]++;
        }

        int mod=998244353;
        int ans=1;
        bool possible=true;
        for(int i=0; i<n/2; i++){
            if(cnt[i] + cnt[n-i-1] !=2){
                possible=false;
            }
            ans = ans*2 % mod;
        }
        if(possible==false){
            cout << 0 << endl;
        }
        else cout << ans << endl;
    }
}
