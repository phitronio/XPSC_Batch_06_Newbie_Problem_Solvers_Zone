#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        bool odd = false, even = false;

        for (int &x : a) {
            cin >> x;
            if (x % 2 == 0) even = true;
            else odd = true;
        }

        if (odd && even) sort(a.begin(), a.end());

        for (int i = 0; i < n; ++i)
            cout << a[i] << (i == n - 1 ? '\n' : ' ');
    }
}