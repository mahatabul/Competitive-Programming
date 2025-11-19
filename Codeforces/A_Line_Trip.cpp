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

void solve()
{
    int n, x, des, s = 0, diff = -1;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        cin >> des;
        diff = max(diff, des - s);
        s = des;
    }

    diff = max(diff, 2 * (x - des));

    cout << diff << endl;
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