#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int>a(n);
        set<int>s;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s.insert(a[i]);
        }

        cout << m-s.size() << endl;
    }
}
