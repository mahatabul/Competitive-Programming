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
        int n, a, b;
        cin >> n >> a >> b;

        int a_price = n * a, b_price = (n / 2) * b;
        if (n % 2 != 0)
        {
            int extra = n - ((n / 2) * 2);
            b_price += (extra * a);
        }

        cout << min(a_price, b_price) << endl;
    }

    return 0;
}