#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a = n;
        long long b = n-1;
        long long c = n-2;

        if(2*max({a,b,c}) < (a+b+c)){
            cout << a+b+c << endl;
        }
        else cout << -1 << endl;
    }
}
