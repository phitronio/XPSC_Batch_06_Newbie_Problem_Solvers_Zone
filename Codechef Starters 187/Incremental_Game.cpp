#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        int alice_x_remove = min(x,k);//3
        int alice_y_remove = min(y,k);//4
        int alice_remove = max(alice_x_remove, alice_y_remove);

        if(x>=y){
            x = x - alice_remove;
            if(x >= alice_remove+1 or y>=alice_remove+1){
                cout << "Bob" << endl;
            }
            else{
                cout << "Alice" << endl;
            }
        }
        else{
            y = y - alice_remove;
            if(x >= alice_remove+1 or y>=alice_remove+1){
                cout << "Bob" << endl;
            }
            else{
                cout << "Alice" << endl;
            }
        }
    }
}
