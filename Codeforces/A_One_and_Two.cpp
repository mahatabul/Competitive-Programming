/* #include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    double total_log = 0;
    for (int i = 0; i < n; i++) {
        total_log += log(a[i]);
    }

    double prefix_log = 0;
    for (int k = 1; k < n; k++) {
        prefix_log += log(a[k - 1]);
        double suffix_log = total_log - prefix_log;

        if (abs(prefix_log - suffix_log) < 1e-9) {
            cout << k << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
 */


/*
        _______________________________
       |                               |
       |  "Why isn't 1.000000001       |
       |   the same as 1.000000000?"   |
       |                               |
       |    "Ah, floating-point        |
       |     precision...              |
       |      1e-9 matters!"           |
       |_______________________________|
                \     |     /
                 \    |    /
                  \   |   /
                   \  |  /
                    \ | /
                     \|/
                      |
 */

/*
         .--.
        |o_o |
        |:_/ |
       //   \ \
      (|     | )
     /'\_   _/`\
     \___)=(___/

 */

/*
         ___________
        /            \
       |  O      O   |
       |      ^      |
       |    \___/    |
        \___________/
            |   |
         ___|___|___
        /           \
       /_____________\

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
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    double total_log = 0;
    for (int i = 0; i < n; i++)
    {
        total_log += log(a[i]);
    }

    double prefix_log = 0;
    for (int k = 1; k < n; k++)
    {
        prefix_log += log(a[k - 1]);
        double suffix_log = total_log - prefix_log;

        if (abs(prefix_log - suffix_log) < 1e-9)
        {
            cout << k << endl;
            return;
        }
    }

    cout << -1 << endl;
}