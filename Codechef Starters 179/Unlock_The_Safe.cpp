#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        int mov = 0;
        vector<int>diff;
        for(int i=0; i<n; i++){
            int cnt = min( abs(a[i]-b[i]), 9 - abs(a[i]-b[i]));
            int cnt2 = max( abs(a[i]-b[i]), 9 - abs(a[i]-b[i]));
            mov+=cnt;
            diff.push_back(cnt2 - cnt);//odd
        }

        int remain = k - mov;

        int minDiff = INT_MAX;
        for(int i=0; i<diff.size(); i++){
            minDiff = min(minDiff, diff[i]);//odd
        }

        if(remain<0) cout << "NO" << endl;
        else if(remain%2==0 || minDiff<=remain) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
