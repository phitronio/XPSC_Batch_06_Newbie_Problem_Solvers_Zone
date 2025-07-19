#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        int maxProfit=0;

        for(int x=1; x<=100; x++){
            int sold = 0;
            for(int i=0; i<n; i++){
                sold += min(x, a[i]);
            }
            int profit = 50*sold - 30*x*n;
            maxProfit = max(maxProfit, profit);
        }
        cout << maxProfit << endl;
    }
}
