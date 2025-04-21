#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, m, k;
      cin >> n >> m >> k;
      int grid[n][m];
      int curr = 1;
      for (int i = 0;i < n;i++) {
         for (int j = 0;j < m;j++) {
            grid[i][j] = curr;
            curr++;
            if (curr > k) {
               curr = 1;
            }
         }
      }

      if (m % k == 0) {
         int nxt = 0;
         for (int i = 0;i < n;i++) {
            rotate(grid[i], grid[i] + nxt, grid[i] + m);
            nxt++;
            if (nxt == m) {
               nxt = 0;
            }
         }
      }

      for (int i = 0;i < n;i++) {
         for (int j = 0;j < m;j++) {
            cout << grid[i][j] << " ";
         }
         cout << '\n';
      }
   }
   return 0;
}