#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(y==0 && x>0 && z>=x-1){
            cout << "Yes" << endl;
        }
        else if(y>0 && x>0 && z>=x){
            cout << "Yes" << endl;
        }
        else if(x==0){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}
