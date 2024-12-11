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
        int a, b;
        char c;
        cin >> a >> c >> b;
        if (a > b)
        {
            cout << a << ">" << b;
        }
        else if (a < b)
        {
            cout << a << "<" << b;
        }
        else
            cout << a << "=" << b;

        cout << "\n";
    }

    return 0;
}