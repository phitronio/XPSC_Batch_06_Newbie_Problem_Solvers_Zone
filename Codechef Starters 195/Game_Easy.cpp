#include <bits/stdc++.h>
using namespace std;

int rangesum(int x, int y){
    int one_to_y = (y*(y+1))/2;        //1....y
    int one_to_x_minus_1 = (x*(x-1))/2;           //1....x-1
    return one_to_y - one_to_x_minus_1;
}

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
        sort(a.rbegin(), a.rend());
        for(int i=1; i<n; i++){
            a[i]+=a[i-1];
        }

        for(int k=1; k<=2*n; k++){
            int ans = 0;

            for(int take=(k+1)/2; take<=n; take++){
                int sum=0;
                if(take>k) break;
                sum+=a[take-1];
                int left = k-take;
                sum += rangesum(take-left, take-1);
                ans = max(ans, sum);
            }
            cout << ans << " ";
        }
        cout << endl;

    }
}
