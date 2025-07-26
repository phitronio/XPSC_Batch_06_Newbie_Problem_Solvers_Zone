#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n ;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int maxL = *max_element(b.begin(),b.end());
        int ans = INT_MIN;
        for(int L=1; L<=maxL; L++){
            int sum=0;
            for(int i=0; i<n; i++){
                if(b[i]<=L && a[i]>0){
                    sum+=a[i];
                }
            }
            ans = max(ans, sum-L);
        }
        if(ans<0) ans=0;
        cout << ans << endl;
        
    }
}
