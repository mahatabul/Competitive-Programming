#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{

    ll money = 0, n, m;
    cin >> n >> m;
    int tv[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> tv[i];
    }
    sort(tv, tv + n);
    for (auto i = 0; i < m; i++)
    {
        if (tv[i] <= 0)
        {
            money += tv[i];
        }
    }

    cout << abs(money);

    return 0;
}