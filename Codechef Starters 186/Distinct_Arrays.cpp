#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>ans(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool possible = true;
        for(int i=0; i<n; i++){
            ans[i] = a[i]-i;
            if(ans[i]<=0){
                cout << 0 << endl;
                possible = false;
                break;
            }
        }

        if(!possible) continue;

        long long prod = 1;
        for(int i=0; i<n; i++){
            prod = (prod * ans[i]) % mod;
        }
        cout << prod << endl;

    }
}
