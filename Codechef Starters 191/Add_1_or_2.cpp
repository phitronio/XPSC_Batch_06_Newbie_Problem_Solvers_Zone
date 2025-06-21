#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isPossible(ll mid, vector<ll>&a, vector<ll>&b, ll n){
    vector<ll>ache;//
    ll event=0;
    for(int i=0; i<n; i++){
        ll gap = mid-a[i];//3
        if(gap>=b[i]){
            ache.push_back(gap-b[i]);
        }
        else{
            event += b[i] - gap;
        }
    }

    for(ll val : ache){
        event -= val/2;
    }

    if(event<=0) return true;
    else return false;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        vector<ll>a(n);
        vector<ll>b(n);
        ll mx=0;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        ll low=mx, high=1e14, ans=high;

        while(low<=high){
            int mid = (low+high)/2;
            if(isPossible(mid, a, b, n)){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }

        cout << ans  << '\n';

    }
}
