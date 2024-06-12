#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void chadgpt()
{
    ll n, result = -1;
    cin >> n;
    ll digits[n + 1] = {0};

    for (auto i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        digits[value]++;
        if (digits[value] >= 3)
        {
            result = value;
        }
    }
    cout << result << endl;
}
int main()
{
    fastio;

    ll t;
    cin >> t;
    while (t--)
    {
        chadgpt();
    }

    return 0;
}