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
    int n;
    cin >> n;
    int a[n], b[n];
    int ajisai = 1, mai = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            ajisai = a[i];
        }
        else
        {
            ajisai ^= a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (i == 0)
        {
            mai = b[i];
        }
        else
        {
            mai ^= b[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            continue;
        }

        int new_mai = mai ^ b[i] ^ a[i];
        int new_ajisai = ajisai ^ a[i] ^ b[i];

        if ((i + 1) % 2 == 0)
        {
            int curdiff = mai - ajisai;
            int newdiff = new_mai - new_ajisai;
            if (newdiff > curdiff)
            {

                ajisai = new_ajisai;
                mai = new_mai;
            }
        }
        else
        {
            int curdiff = ajisai - mai;
            int newdiff = new_ajisai - new_mai;
            if (newdiff > curdiff)
            {

                ajisai = new_ajisai;
                mai = new_mai;
            }
        }
    }

    if (ajisai == mai)
    {
        cout << "Tie";
    }
    else if (ajisai > mai)
    {
        cout << "Ajisai";
    }
    else
    {
        cout << "Mai";
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