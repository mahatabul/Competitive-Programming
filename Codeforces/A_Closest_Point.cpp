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

    ll t;
    cin >> t;
    while (t--)
    {
        bool f = false;
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 2 and a[1] - a[0] > 1)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}