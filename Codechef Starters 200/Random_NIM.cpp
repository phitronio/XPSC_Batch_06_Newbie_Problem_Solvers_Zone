#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        int notOne = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]!=1){
                notOne++;
            }
        }
        if(notOne==0){
            cout << n%2 << endl;
        }
        else{
            cout << 499122177 << endl;
        }
    }
}
