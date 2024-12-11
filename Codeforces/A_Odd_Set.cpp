/*
C makes it easy to shoot yourself in the foot; C++ makes it harder, but when you do, it blows your whole leg off.
*/

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
    int n;
    cin >> n;

    int even = 0, odd = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        int c;
        cin >> c;
        if (c&1)
        {
            odd++;
        }
        else even++;
        
    }

    if (even==odd)
    {
        cout<<"Yes";
    }
    else cout<<"No";

    cout << "\n";
}