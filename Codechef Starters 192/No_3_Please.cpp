#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n), pref_er_vagses(n);
        int sum = 0, lastz=-1;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum = (sum+a[i])%3;
            if(sum==0) lastz=i;

            pref_er_vagses[i] = sum;
        }

        if(lastz==-1){
            cout << "Yes" << endl;
            continue;
        }

        if(lastz==n-1){
            cout << "NO" << endl;
            continue;
        }

        map<int,int>cnt;
        bool ok= false;

        for(int i=0; i<n; i++){
            if(i>lastz){
                if(cnt[pref_er_vagses[i]] == 0){
                    ok=true;
                    break;
                }
            }
            cnt[pref_er_vagses[i]]++;
        }

        if(ok){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        } 

    }
}
