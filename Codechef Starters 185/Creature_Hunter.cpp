#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p1, pair<int,int>p2){
    double val1 = (double) p1.second/p1.first;
    double val2 = (double) p2.second/p2.first;

    return val1 > val2;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, H;
        cin >> n >> H;
        vector<pair<int,int>>a(n);//{time, damage}
        for(int i=0; i<n; i++){
            int time, damage;
            cin >> time >> damage;
            a[i] = {time, damage};
        }
        sort(a.begin(), a.end(), cmp);

        // for(int i=0; i<n; i++){
        //     cout << a[i].first << " " << a[i].second << endl;
        // }


        int ans=0;

        int hitcnt = H/a[0].second;//11
        H -= hitcnt*a[0].second;// 100 - 11*9=1
        ans += hitcnt*a[0].first;//11*2=22

        if(H > 0){
            int minTime = INT_MAX;
            for(int i=0; i<n; i++){
                // int cnt = ceil(H/a[i].second);
                int cnt = (H+a[i].second-1)/a[i].second;
                int totalTime = cnt*a[i].first;
                minTime = min(minTime, totalTime);
            }
            ans+=minTime;
        }
        cout << ans << endl;
    }
}
