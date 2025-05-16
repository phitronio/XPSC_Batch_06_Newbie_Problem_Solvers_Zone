#include <bits/stdc++.h>
using namespace std;

bool kth_bit_on(int n, int k) {
   return ((n >> k) & 1);
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int x;
      cin >> x;
      int MSB = __lg(x), B = (1 << MSB), A = (x ^ B), sum = B, cnt = 0;
      for (int k = 0;k <= MSB;k++) {
         if (!kth_bit_on(A, k) && !kth_bit_on(B, k) && (sum + (1 << k)) <= x) {
            cnt++;
            sum += (1 << k);
         }
      }
      int ans = (1 << cnt);
      cout << ans << '\n';
   }

   return 0;
}