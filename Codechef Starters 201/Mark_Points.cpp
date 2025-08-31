#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0;
        bool ok = true;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                cnt++;
            }else{
                if(cnt!=0 && cnt<3){
                    ok=false;
                }
                cnt=0;
            }
        }
        if(cnt!=0 && cnt<3){
            ok=false;
        }
        if(ok){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}
