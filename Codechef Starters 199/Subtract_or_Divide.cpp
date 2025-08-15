#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    cin >> n;
    if(n%2){
        cout << (n+1)/2 << endl;
    }
    else{
        int ans = n/2;
        n/=2;
        if(n%2==0) n--;
        ans += (n+1)/2;
        cout << ans << endl;
    }
}
