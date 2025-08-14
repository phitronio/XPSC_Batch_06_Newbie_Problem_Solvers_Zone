#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int gold1, silver1, gold2, silver2;
        cin >> gold1 >> silver1 >> gold2 >> silver2;
        int value1 = 5*gold1 + silver1;
        int value2 = 5*gold2 + silver2;

        if(value1==value2){
            cout << "Yes" << endl;
        }
        else if(value1>=value2 && (value1-value2)%6==0){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}
