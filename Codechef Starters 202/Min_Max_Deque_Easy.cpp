#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int>a(n+1);
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        pair<int,int>ans;
        ans = {a[1], a[2]};
        for(int i=3; i<=n; i++){
            if(i%2==1){//alice
                if(ans.first < ans.second)  ans.first = a[i];
                else ans.second = a[i];
            }
            else{//bob
                if(ans.first < ans.second) ans.second = a[i];
                else ans.first = a[i];
            }
        }
        cout << min(ans.first, ans.second) << endl;
    }
}
