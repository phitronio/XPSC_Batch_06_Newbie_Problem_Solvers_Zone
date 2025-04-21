#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      string a, b;
      cin >> a >> b;
      int n = a.size(), m = b.size();
      vector<pair<int, char>> v1, v2;
      int idx = 0;
      while (idx < n) {
         char curr = a[idx];
         int cnt = 0;
         while (idx < n) {
            if (a[idx] != curr) {
               break;
            }
            cnt++;
            idx++;
         }
         v1.push_back({ cnt,curr });
      }
      idx = 0;
      while (idx < m) {
         char curr = b[idx];
         int cnt = 0;
         while (idx < m) {
            if (b[idx] != curr) {
               break;
            }
            cnt++;
            idx++;
         }
         v2.push_back({ cnt,curr });
      }

      bool ok = true;
      if (v1.size() != v2.size()) {
         ok = false;
      }
      else {
         for (int i = 0;i < v1.size();i++) {
            if (!(v2[i].first >= v1[i].first && v2[i].first <= (2 * v1[i].first)) || (v1[i].second != v2[i].second)) {
               ok = false;
               break;
            }
         }
      }
      if (ok) {
         cout << "YES" << '\n';
      }
      else {
         cout << "NO" << '\n';
      }
   }
   return 0;
}