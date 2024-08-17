#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<int> arr(n + 2, NULL); 
        ll a;
        cin >> a;
        arr[a] = 1;
        n--;
        bool flag = false;
        while (n--) {
            ll q;
            cin >> q;
            if (flag) {
                continue;
            }
            if (arr[q-1] == 0 && arr[q+1] == 0) { 
                cout << "NO" << endl;
                flag = true;
            }
            arr[q] = 1;
            
        }
        if (!flag) {
            cout << "YES" << endl;
        }
    }

    return 0;
}