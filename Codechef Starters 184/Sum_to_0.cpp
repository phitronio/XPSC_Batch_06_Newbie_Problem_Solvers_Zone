#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << -1 << endl;
            continue;
        }

        if(n%2==0){
            for(int i=1; i<=n; i+=2){
                cout << -1 << " " << 1 <<" ";
            }
            cout << endl;
        }
        else{
            cout << -1 << " " << -1 << " " << 2 << " "; 
            for(int i=1; i<=n-3; i+=2){
                cout << -1 << " " << 1 <<" ";
            }
            cout << endl;
        }
    }
}
