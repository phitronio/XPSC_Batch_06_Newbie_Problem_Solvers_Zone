#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cost=0;
        int bundle_of_3, bundle_of_2;
        if(n%3==0){
            bundle_of_3 = n/3;
            cost = bundle_of_3 * 5;
        }
        else if(n%3==1){
            bundle_of_3 = n/3 - 1;
            bundle_of_2 = 2; 
            cost = bundle_of_3*5 + bundle_of_2*4;
        }
        else{//n%3==2
            bundle_of_3 = n/3;
            bundle_of_2 = 1;
            cost = bundle_of_3*5 + bundle_of_2*4;
        }
        cout << cost << endl;
    }
}
