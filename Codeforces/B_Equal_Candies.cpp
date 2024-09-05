#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void chatgpt()
{
    ll n, sum = 0, minimum = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll candies;
        cin >> candies;
        sum += candies;
        minimum = min(minimum, candies);
    }

    cout << sum - (minimum * n) << endl;
}
int main()
{
    fastio;

    ll t;
    cin >> t;
    while (t--)
    {
        chatgpt();
    }

    return 0;
}