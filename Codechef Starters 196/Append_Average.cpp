#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while(t--){
        ll n, k; 
        cin >> n >> k;
        vector<ll>a(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum+=a[i];
        }
        sort(a.begin(), a.end());
        int mn1 = a[0];
        int mn2 = a[1];

        while(k){
            ll avg = (mn1 + mn2 +1)/2;
            if(avg<mn2){
                mn2 = avg;
                sum+=avg;
            }
            else {
                sum += avg*k;
                break;
            }
            k--;
        }
        cout << sum << endl;
    }
}
