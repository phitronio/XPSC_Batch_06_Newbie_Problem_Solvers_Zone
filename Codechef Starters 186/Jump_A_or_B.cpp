#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m, a, b;
        cin >> n >> m >> a >> b;

        if(m < n*a || m > n*b){
            cout << "No" << endl;
            continue;
        }

        if((m-n*a)%(b-a)==0){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}
