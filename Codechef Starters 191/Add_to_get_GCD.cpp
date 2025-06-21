#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(__gcd(x,y)>1){
            cout << 0 << endl;
            continue;
        }

        if(x%2==1 && y%2==1){
            if((__gcd(x+1,y)>1) || (__gcd(x,y+1)>1)){
                cout << 1 << endl;
            }
            else cout << 2 << endl;
        }
        else{//ekta jor & ekta bejor
            cout << 1 << endl;
        }
    }
}
