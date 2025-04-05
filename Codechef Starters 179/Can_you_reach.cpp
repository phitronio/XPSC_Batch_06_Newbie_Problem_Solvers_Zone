#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>h(n);
        
        for(int i=0; i<n; i++){
            cin >> h[i];
        }
        vector<ll>ind;
        for(int i=1; i<n-1; i++){
            if(h[i-1]>h[i] && h[i+1]>h[i] or h[i-1]<h[i] && h[i+1]<h[i]){
                ind.push_back(i);
            }
        }

        ll ans = (n*(n-1))/2;
        if(ind.size()<2){
            cout << ans << endl;
            continue;
        }
        ll prev =0;
        for(int i=0; i<ind.size()-1; i++){
            ll unfriend = (ind[i]-prev) * (n-1- ind[i+1]);
            ans-=unfriend;
            prev = ind[i];
        }

        cout << ans << endl;
    }
}
