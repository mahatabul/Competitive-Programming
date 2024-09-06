#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n);

    for (auto &x : a)
    {
        cin >> x;
    }

    vector<ll> mlen(n, 0);
    mlen[0] = 1;
    mlen[1] = 2;

    for (auto j = 2; j < n; j++)
    {
        if (a[j] - a[j - 1] == a[j - 1] - a[j - 2])
        {
            mlen[j] = mlen[j - 1] + 1;
        }
        else
            mlen[j] = 2;
    }

    for (auto i : mlen)
    {
        ans += i;
    }

    cout << ans;

    return 0;
}