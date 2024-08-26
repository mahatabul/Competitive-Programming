#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        n *= m;

        if (n == 1 or n == 2)
        {
            cout << 1 << endl;
            continue;
        }

        ll lights = n / 2;
        if (n % 2 != 0)
        {
            lights++;
        }

        cout << lights << endl;
    }

    return 0;
}