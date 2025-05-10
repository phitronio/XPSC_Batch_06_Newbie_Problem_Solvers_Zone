#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n-1==k){
            for(int i=1; i<=n; i++){
                cout << i << " ";
            }
            continue;
        }
        vector<int>vec(n);
        int val=1e9;
        for(int i=0; i<n-2; i++){
            vec[i] = val;
            val--;
        }

        if(vec.size()>2){
            vec[n-3] = 1;
        } 

        k-=(n-2);

        vec[n-2] = k;
        vec[n-1] = k*2;

        if(k<=0){
            cout << -1 << endl;
            continue;
        }
        for(int i=0; i<n; i++){
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}
