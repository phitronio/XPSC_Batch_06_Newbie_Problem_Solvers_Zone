#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l=1, r=n+5; 
        int ans=-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            int sorted_length=0, zero=0, split_cnt=0;
            for(int i=0; i<n; i++){
                if(s[i]=='0') zero++;
                else sorted_length++;
                sorted_length = max(sorted_length, zero);
                if(sorted_length>=mid){
                    split_cnt++;
                    sorted_length=0, zero=0;
                }
            }
            if(split_cnt>=k){
                ans = mid;
                l = mid + 1;
            }
            else r = mid-1;
        }
        cout << ans << endl;
    }
}
