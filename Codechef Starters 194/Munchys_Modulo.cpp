#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        int ans = INT_MIN;
        for(int i=1; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                ans = max( ans, a[0]%(a[i]+a[j]) );
            }
        }
        ans = max(ans, a[1]);
        
        cout << ans << endl;
    }
}
