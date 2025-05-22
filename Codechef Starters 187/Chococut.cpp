#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        if(k==0){
            cout << n*m << endl;
            continue;
        }
        vector<int>row;
        vector<int>col;
        for(int i=m; i<=n*m; i+=m){
            row.push_back(i);
        }
        for(int i=n; i<=n*m; i+=n){
            col.push_back(i);
        }
        int bob_extra_row=0;
        for(int i=0; i<row.size(); i++){
            if(row[i]>=k){
                bob_extra_row = row[i] - k ;
                break;
            }
        }
        int bob_extra_col=0;
        for(int i=0; i<col.size(); i++){
            if(col[i]>=k){
                bob_extra_col = col[i] - k ;
                break;
            }
        }
        int mn = min(bob_extra_col,bob_extra_row);
        cout << n*m - k - mn << endl;
    }
}
