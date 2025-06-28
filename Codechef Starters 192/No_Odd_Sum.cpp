#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int one=0, two=0;
        for(int i=0; i<n; i++){
            int val;
            cin >> val;
            if(val==1) one++;
            else two++;
        }
        int ans = two;

        if(one%2==0){
            ans = min(ans, one/2);
        }

        cout << ans << endl;


    }
}
