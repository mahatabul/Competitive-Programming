#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        if (a[0] == a[n - 1])
        {
            cout << -1 << endl;
            continue;
        }
        int c = 0;
        while (a[c] == a[0])
        {
            c++;
        }
        cout << c << " " << n - c << endl;

        for (int i = 0; i < c; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        for (int i = c; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}