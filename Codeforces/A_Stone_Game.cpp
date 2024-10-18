#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define ll long long
#define ul unsigned long long
#define pb push_back
#define mp make_pair
#define bend(x) x.begin(), x.end()

using namespace std;
using namespace __gnu_pbds;

bool is_prime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int m = factorial(n - 1);
    int k = n * m;
    return k;
}
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
    return 0;
}

void solve()
{
    int n, maxi, mini, ans, m = 0;
    maxi = 0, mini = INT_MAX;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxi = max(maxi, a[i]);
        mini = min(a[i], mini);
    }
    int maxi_index = 0, mini_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mini)
        {
            mini_index = i;
        }
        if (a[i] == maxi)
        {
            maxi_index = i;
        }
    }

    int min_from_left = 0, maxi_from_left = 0;

    min_from_left = mini_index + 1;
    maxi_from_left = maxi_index + 1;

    int maxi_from_right = n - maxi_index, mini_from_right = n - mini_index;

    int l1 = max(min_from_left, maxi_from_left), l2 = max(mini_from_right, maxi_from_right), l3 = min_from_left + maxi_from_right, l4 = mini_from_right + maxi_from_left;

    ans = min({l1, l2, l3, l4});

    cout << ans << endl;
}