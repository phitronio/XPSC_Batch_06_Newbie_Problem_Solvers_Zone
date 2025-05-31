#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cs;
   cin >> cs;
   while (cs--) {
      int n;
      cin >> n;
      multiset<int> row, col;
      vector<pair<int, int>> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i].first >> a[i].second;
         row.insert(a[i].first);
         col.insert(a[i].second);
      }

      if (n == 1) {
         cout << 1 << '\n';
         continue;
      }

      long long ans = 1e18;
      for (int i = 0;i < n;i++) {
         row.erase(row.find(a[i].first));
         col.erase(col.find(a[i].second));

         int r = (*row.rbegin() - *row.begin()) + 1, c = (*col.rbegin() - *col.begin()) + 1;
         if (1LL * r * c > n - 1) {
            ans = min(ans, 1LL * r * c);
         }
         else {
            ans = min({ ans,(1LL * r * c) + r,(1LL * r * c) + c });
         }
         row.insert(a[i].first);
         col.insert(a[i].second);
      }
      cout << ans << '\n';
   }
   return 0;
}