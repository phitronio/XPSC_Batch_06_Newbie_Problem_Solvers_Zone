#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int cs;
   cin >> cs;
   while (cs--) {
      int n, k;
      cin >> n >> k;
      string s;
      cin >> s;
      int one = 0, zero = 0;
      for (int i = 0;i < n;i++) {
         zero += (s[i] == '0');
         one += (s[i] == '1');
      }

      int ans = (n / 2) - (one % 2), mn = min(zero, one);
      while (ans > k && mn > 1) {
         ans -= 2;
         mn -= 2;
      }

      if (ans == k) {
         cout << "YES" << '\n';
      }
      else {
         cout << "NO" << '\n';
      }
   }
   return 0;
}