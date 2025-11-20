#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ff first
#define ss second

ll sumofnumbers(ll n)
{
    return ((n) * (n + 1)) / 2;
}
void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    ll min_sum, max_sum;

    min_sum = sumofnumbers(k);

    max_sum = k * n - sumofnumbers(k - 1);

    if (x >= min_sum && x <= max_sum)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

int main()
{
    fast_io;

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}