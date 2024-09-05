#include <bits/stdc++.h>

using namespace std;

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
        int r, b, d;
        cin >> r >> b >> d;

        if (r < b)
            swap(r, b);

        if ((r - 1) / b <= d)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
