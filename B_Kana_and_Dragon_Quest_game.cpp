#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        if (x <= m * 10)
        {
            cout << "YES\n";
            continue;
        }

        while (n != 0)
        {
            x = (x / 2) + 10;
            n--;
        }
        x -= (m * 10);

        x <= 0 ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}