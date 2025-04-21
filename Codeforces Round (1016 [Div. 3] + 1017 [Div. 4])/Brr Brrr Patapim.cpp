#include <bits/stdc++.h>
using namespace std;


int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      set<int> s;
      for (int i = 1;i <= 2 * n;i++) {
         s.insert(i);
      }
      vector<int> ans(2 * n + 1);
      for (int i = 1;i <= n;i++) {
         for (int j = 1;j <= n;j++) {
            int x;
            cin >> x;
            ans[i + j] = x;
            if (s.find(x) != s.end()) {
               s.erase(x);
            }
         }
      }
      ans[1] = *s.begin();
      for (int i = 1;i <= 2 * n;i++) {
         cout << ans[i] << " ";
      }
      cout << '\n';
   }
   return 0;
}