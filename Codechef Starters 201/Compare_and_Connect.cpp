#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n==0){
            m-=2;
            string ans = ">=>";
            string front="";
            for(int i=0; i<m; i++){
                front+="><";
            }
            cout << front+ans << endl;
        }
        else if (m==0){
            n-=2;
            string ans = "<=<";
            string front="";
            for(int i=0; i<n; i++){
                front+="<<";
            }
            cout << front+ans << endl;
        }
        else{
            n-=1;
            m-=1;
            string ans = "<<>";
            string front="";
            string back="";
            for(int i=0; i<n; i++){
                front+="<<";
            }
            for(int i=0; i<m; i++){
                back+="<>";
            }
            cout << front+ans+back << endl;
        }
    }
}
