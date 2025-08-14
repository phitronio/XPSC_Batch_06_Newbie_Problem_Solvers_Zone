#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        set<int>both, one;
        for(int i=0; i<n; i++){
            if(a[i]==b[i]){
                both.insert(a[i]);
            }
            else{
                one.insert(a[i]);
                one.insert(b[i]);
            }
        }

        int mex=0;
        bool first=true;
        while(true){
            if(both.count(mex)){
                mex++;
            }
            else if(one.count(mex) && first){
                mex++;
                first=false;
            }
            else break;
        }
        cout << mex << endl;
    }
}
