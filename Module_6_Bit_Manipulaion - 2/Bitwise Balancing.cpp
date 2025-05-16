#include <bits/stdc++.h>
using namespace std;

bool kth_bit_on(long long n, int k) {
   return ((n >> k) & 1);
}

long long turn_on_kth_bit(long long  n, int k) {
   return (n | (1LL << k));
}

long long  turn_off_kth_bit(long long  n, int k) {
   return (n & (~(1LL << k)));
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      long long a = 0, b, c, d;
      cin >> b >> c >> d;
      a = b;
      int MSB = max({ __lg(b),__lg(c),__lg(d) });
      for (int k = 0;k <= MSB;k++) {
         if (!kth_bit_on(b, k) && kth_bit_on(d, k)) {
            a = turn_on_kth_bit(a, k);
         }
         if (kth_bit_on(c, k) && kth_bit_on(d, k)) {
            a = turn_off_kth_bit(a, k);
         }
      }
      if ((a | b) - (a & c) == d) {
         cout << a << '\n';
      }
      else {
         cout << -1 << '\n';
      }
   }
   return 0;
}