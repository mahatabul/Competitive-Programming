#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio; 

    int t;
    cin >> t;
    while (t--) {
        int n, m, k, ac = 0, bc = 0;
        cin >> n >> m >> k; 
        bool found = true;

        set<int> a, b; 

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (value <= k) {
                a.insert(value);
            }
        }

        for (int i = 0; i < m; i++) {
            int value;
            cin >> value;
            if (value <= k) {
                b.insert(value);
            }
        }

        for (int i = 1; i <= k; i++) {
            if (a.find(i) != a.end()) {
                ac++;
            }
            if (b.find(i) != b.end()) {
                bc++;
            }
            if (b.find(i) == b.end() && a.find(i) == a.end()) {
                found = false;
            }
        }

        if (found && ac >= (k / 2) && bc >= (k / 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
} 