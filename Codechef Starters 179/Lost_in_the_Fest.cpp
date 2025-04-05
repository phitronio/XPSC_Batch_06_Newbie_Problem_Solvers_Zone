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
        int bhoomiHeight = a[n-1];
        int idx = -1;
        for(int i=0; i<n; i++){
            if(a[i]>=bhoomiHeight){
                idx = i;
                break;
            }
        }
        cout << n - 1 - idx << endl;
    }
}
