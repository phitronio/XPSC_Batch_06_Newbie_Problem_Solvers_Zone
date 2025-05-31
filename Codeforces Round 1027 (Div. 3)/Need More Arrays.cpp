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
      int ans = 0, prev = -1;
      for (int i = 0;i < n;i++) {
         int curr;
         cin >> curr;
         if (i == 0) {
            prev = curr;
            ans++;
         }
         else if (curr - prev >= 2) {
            prev = curr;
            ans++;
         }
      }

      cout << ans << '\n';
   }
   return 0;
}