#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   map<int, int> mp;
   mp[10] = 20;
   mp[2] = 12;
   mp[10] = 15;
   mp[8] = 22;
   mp[17] = 7;
   mp[5] = 9;

   cout << mp[10] << '\n';
   cout << mp[2] << '\n';

   // for (auto [key, value] : mp) {
   //    cout << key << " -> " << value << '\n';
   // }

   for (auto it : mp) {
      int key = it.first, value = it.second;
   }
   cout << '\n';

   // auto it = mp.find(8);

   // if (it == mp.end()) {
   //    cout << "Key not found" << '\n';
   // }
   // else {
   //    cout << it->first << " " << it->second << '\n';
   // }

   // cout << mp[25] << '\n';
   // cout << mp[9] << '\n';

   // for (auto it : mp) {
   //    int key = it.first, value = it.second;
   //    cout << key << " " << value << '\n';
   // }

   // mp.erase(8);

   // for (auto it : mp) {
   //    int key = it.first, value = it.second;
   //    cout << key << " -> " << value << '\n';
   // }

   // auto it = mp.find(10);
   // if (it != mp.end()) {
   //    mp.erase(it);
   // }

   // for (auto it : mp) {
   //    int key = it.first, value = it.second;
   //    cout << key << " -> " << value << '\n';
   // }

   // auto it = mp.begin();
   // it++;
   // cout << it->first << " " << it->second << '\n';

   // for (auto it : mp) {
   //    int key = it.first, value = it.second;
   //    cout << key << " -> " << value << '\n';
   // }

   mp[6] = 49;

   for (auto it : mp) {
      int key = it.first, value = it.second;
      cout << key << " -> " << value << '\n';
   }

   auto it = mp.upper_bound(5);
   cout << it->first << " " << it->second;


   return 0;
}