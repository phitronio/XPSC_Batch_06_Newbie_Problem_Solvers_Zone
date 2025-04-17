#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int mx = max({x, y, z});
        int mn = min({x, y, z});
        int mid = (x+y+z) - mx - mn;

        if(mid%2== 1 && mn%2 == 1){
            cout << mid + mn -1 << endl;
        }
        else{
            cout << mid + mn << endl;
        }
    }
}
