#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int same=n-k+1;
        for(int i=same; i>=1; i--){
            cout << i << " ";
        }
        for(int i=same+1; i<=n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
}
