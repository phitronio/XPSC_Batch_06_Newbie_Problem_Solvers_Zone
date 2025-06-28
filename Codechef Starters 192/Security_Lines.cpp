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
        int ans=INT_MAX;

        for(int i=0; i<n; i++){
            int tot;
            if(i==0){
                tot = a[i];
            }
            else{//i=1
                int people_remaining = max(0,a[i] -i+1);
                tot = i + people_remaining;
            }
            ans = min(ans, tot);
            // cout << i << "--"<< tot << endl;
        }
        cout << ans << endl;
    }
}
