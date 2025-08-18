#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, k;
      cin >> n >> k;
      vector<int> a(n), b(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         a[i] %= k;
         a[i] = min(a[i], k - a[i]);
      }
      for (int i = 0;i < n;i++) {
         cin >> b[i];
         b[i] %= k;
         b[i] = min(b[i], k - b[i]);
      }
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      if (a == b) {
         cout << "YES" << '\n';
      }
      else {
         cout << "NO" << '\n';
      }
   }
   return 0;
}