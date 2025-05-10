#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>c(n);
        int red=0, blue=0;
        for(int i=0; i<n; i++){
            cin >> c[i];  
            if(c[i]==1) red++;
            if(c[i]==2) blue++; 
        }

        if(n%2==1 || red>n/2 || blue>n/2){
            cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }
}
