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

        int ans = min(a[0],a[n-1]);
        
        sort(a.begin(), a.end());

        ans = min(ans, a[0]+a[1]);
        
        cout << ans << endl;
    }
}
