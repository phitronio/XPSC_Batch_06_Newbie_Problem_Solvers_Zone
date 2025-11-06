#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n>> k;
        vector<int>a(n);
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        int x=-1;
        for(int i=1; i<=n; i++){
            if(mp[i]==0){
                x=i;
                break;
            }
        }

        if(x==-1){
            vector<int>v={a[0], a[1], a[2]};
            for(int i=0; i<k; i++){
                cout << v[i%3] << " ";
            }
            cout << endl;
        }
        else{
            int z=a[n-1];
            int y=-1;
            for(int i=1; i<=n; i++){
                if(i!=x && i!=z){
                    y=i;
                    break;
                }
            }
            vector<int>v={x, y, z};//v[0]=x,v[1]=y,v[2]=z
            for(int i=0; i<k; i++){
                cout << v[i%3] << " ";
            }
            cout << endl;
        }
    }
}
