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

        bool ok = false;
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                ok=true;
                cout << i+1 << " " << i+2 << endl;
                break;
            }
        }
        if(!ok){
            cout << -1 << endl;
        }
    }
}
