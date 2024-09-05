
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll h, x, y, y1, k;
        cin >> h >> x >> y >> y1 >> k;
        
        ll gun = (h + x - 1) / x; // Equivalent to ceil(h / x)
        ll laser = 0;
        
        if (y * k >= h) {
            // Laser kills the monster within k shots or less
            laser = (h + y - 1) / y; // Equivalent to ceil(h / y)
        } else {
            // Laser with max k shots is not enough
            h -= y * k;
            laser = k + (h + y1 - 1) / y1; // Equivalent to ceil(h / y1)
        }

        cout << min(laser, gun) << "\n";
    }

    return 0;
}
