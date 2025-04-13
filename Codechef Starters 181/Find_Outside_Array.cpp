#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        bool pos = false, neg = false;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]>0) pos = true;
            if(a[i]<0) neg = true;
        }
        sort(a.begin(), a.end());
        if(pos){
            cout << a[n-1] << " " << a[n-1] << endl;
        }
        else if(neg){
            cout << a[0] << " " << a[0] << endl;
        }
        else cout << -1 << endl;
    }
}
