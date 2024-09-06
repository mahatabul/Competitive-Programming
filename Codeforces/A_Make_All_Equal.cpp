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
        ll n;
        cin >> n;

        vector<ll> a(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll mL = 0;
        ll cL = 0;
        ll e = a[0];
        for (auto i = 0; i < n; i++)
        {

            if (a[i] == e)
            {
                cL++;
            }
            else
            {
                e = a[i];
                cL = 1;
            }

            mL = max(cL, mL);
        }

        cout << n - mL << endl;
    }

    return 0;
}