#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int>level(n);
        vector<int>gold(n);
        vector<pair<int,int>>a(n);
        for(int i=0; i<n; i++){
            cin >> level[i];
            a[i].first = level[i];
            a[i].second = i;
        }
        sort(a.begin(), a.end());

        for(int i=0; i<n; i++){
            cin >> gold[i];
        }

        long long sum = 0;//126-29+45=142
        multiset<int>k_values;//[42,45, 55]
        vector<long long>ans(n, 0);
        for(int i=0; i<n; i++){
            int pos = a[i].second;//0
            
            ans[pos] = sum;//142
         
            if((int)k_values.size()<k){
                sum += gold[pos];//71+55=126
                k_values.insert(gold[pos]);//29 42 55
            }
            else{
                auto first = k_values.begin();
                int first_val = *first;//29

                if(gold[pos]> first_val){
                    sum -= first_val;
                    k_values.erase(first);
                    sum += gold[pos];
                    k_values.insert(gold[pos]);
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
