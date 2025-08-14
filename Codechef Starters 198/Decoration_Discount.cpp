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

        int mn=INT_MAX;
        for(int i=0; i<n-1; i++){
            int curr_mn = a[i] + (a[i+1]/2);
            mn = min(mn, curr_mn);
        }

        sort(a.begin(), a.end());

        mn = min(mn, a[0]+a[1]);
        cout << mn << endl;

    }
}
