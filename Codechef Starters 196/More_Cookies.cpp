#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, c; 
        cin >> n >> c;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int need=0;
        while(1){
            int current_cookies = c + need;
            bool equal = false, less_than = false;
            for(int i=0; i<n; i++){
                if(a[i]==current_cookies) equal = true;
                if(a[i]< current_cookies) less_than = true;
            }

            if(equal == false && less_than==true){
                cout << need << endl;
                break;
            }
            need++;
        }


    }
}
