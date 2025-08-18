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
      vector<int> g[n + 1];
      for (int i = 1;i < n;i++) {
         int u, v;
         cin >> u >> v;
         g[u].push_back(v);
         g[v].push_back(u);
      }
      int leaf = 0;
      for (int i = 1;i <= n;i++) {
         if (g[i].size() == 1) {
            leaf++;
         }
      }
      int ans = n;
      for (int u = 1;u <= n;u++) {
         int currLeaf = leaf;
         for (auto v : g[u]) {
            if (g[v].size() == 1) {
               currLeaf--;
            }
         }
         if (g[u].size() == 1) {
            currLeaf--;
         }
         ans = min(ans, currLeaf);
      }
      cout << ans << '\n';
   }
   return 0;
}