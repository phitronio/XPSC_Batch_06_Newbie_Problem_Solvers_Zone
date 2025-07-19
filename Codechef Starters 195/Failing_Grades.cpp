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

        int sum=0;
        bool flag = true;
        double avg;
        for(int i=0; i<n; i++){
            sum+=a[i];
            avg = (double)sum/(i+1);
            if(avg<40){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}
