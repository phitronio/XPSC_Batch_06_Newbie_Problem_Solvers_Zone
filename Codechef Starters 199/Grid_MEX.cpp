#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                cout << j << " ";
            }
            for(int k=0; k<i; k++){
                cout << k << " ";
            }
            cout << endl;
        }
    }
}
