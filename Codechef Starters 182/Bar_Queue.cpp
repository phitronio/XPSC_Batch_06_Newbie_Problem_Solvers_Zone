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
        
        int cnt_g=0, cnt_b=0;
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='B'){
                cnt_b++;
                count++;
            }
            else{
                cnt_g++;
                count++;
            }
            if(cnt_b > cnt_g*2){
                break;
            }
        }
        cout << count << endl;
    }
}
