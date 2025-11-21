#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1 && i > 0 && i < n - 1)
        {
            a[i] = 0;
        }
    }

    if (a[0] == -1 && a[n - 1] == -1)
    {
        a[0] = a[n - 1] = 0;
    }
    else if (a[0] == -1)
    {
        a[0] = a[n - 1];
    }
    else if (a[n - 1] == -1)
    {
        a[n - 1] = a[0];
    }

    int result = abs(a[n - 1] - a[0]);

    cout << result << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i < n - 1)
            cout << " ";
    }
    cout << endl;
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