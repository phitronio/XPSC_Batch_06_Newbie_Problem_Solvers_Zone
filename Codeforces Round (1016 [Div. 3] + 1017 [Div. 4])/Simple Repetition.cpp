#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
   if (n == 1) {
      return false;
   }
   for (int i = 2;i * i <= n;i++) {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int x, k;
      cin >> x >> k;
      if (x == 1 && k == 2) {
         cout << "YES" << '\n';
      }
      else if (isPrime(x) && k == 1) {
         cout << "YES" << '\n';
      }
      else {
         cout << "NO" << '\n';
      }
   }
   return 0;
}