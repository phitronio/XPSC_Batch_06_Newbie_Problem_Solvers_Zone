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
        int ans=1;
        int last=a[0];
        for(int i=1; i<n; i++){
            if(a[i]%2 != last%2){
                ans++;
                last = a[i];
            }
        }
        cout << ans << endl;
    }
}
