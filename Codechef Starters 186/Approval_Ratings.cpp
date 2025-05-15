#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        vector<int>a(5);
        int sum=0;
        for(int i=0; i<5; i++){
            cin >> a[i];
            sum+=a[i];
        }
        sort(a.begin(), a.end());
        int coin=0;
        for(int i=0; i<5; i++){
            if(sum>=35) break;
            sum+=(10-a[i]);
            coin+=100;
        }
        cout << coin << endl;
    }
}
