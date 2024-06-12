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
        ll n;
        cin >> n;

        ll sum = 0, p = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;

            mx = max(mx, a);
            sum += a;
            if (sum - mx == mx)
            {
                p++;
            }
        }
        cout << p << endl;
    }

    return 0;
}

/* #include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) a *b / gcd(a, b)
#define ll long long
#define ul unsigned long long
#define pb push_back
#define mp make_pair
#define bend(x) x.begin(), x.end()
#define rend(x) x.rbegin(), x.rend()
#define in(x, i) x.begin() + i,
#define memset(a, b) memset(a, b, sizeof(a))

using namespace std;
using namespace __gnu_pbds;

void solve();

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

void solve()
{
    int n;
    cin >> n;
    ll a[n + 1];
    int good = 0;
    ll pf[n + 1];
    pf[0] = 0;
    ll mx = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pf[i] = pf[i - 1] + a[i];

        mx = max(a[i], mx);
        if (mx * 2 == pf[i])
            good++;

    }
    std::cout << good << endl;
} */
