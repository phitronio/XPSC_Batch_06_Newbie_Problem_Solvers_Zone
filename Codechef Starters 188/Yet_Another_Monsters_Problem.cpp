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
        sort(a.begin(), a.end());

        int ans=n;

        for(int i=0; i<n; i++){
            int total_time = a[i] + n - (i+1);
            ans = min(ans, total_time);
        }
        cout << ans << endl;
    }
}
