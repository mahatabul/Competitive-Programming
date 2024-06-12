#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b / gcd(a, b))
#define ll long long
#define ul unsigned long long
#define pb push_back
#define mp make_pair
#define bend(x) x.begin(), x.end()

using namespace std;
using namespace __gnu_pbds;

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
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
    int n, maximum = 0, minimum = INT_MAX;
    cin >> n;
    int a[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> a[i];
        if (maximum < a[i])
        {
            maximum = a[i];
        }
        if (minimum > a[i])
        {
            minimum = a[i];
        }
    }
    cout << maximum - minimum << endl;
}