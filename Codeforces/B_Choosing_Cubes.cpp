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

int factorial(int n){
    if (n == 0) {
        return 1;
    }
    int m = factorial(n - 1);
    int k = n * m;
    return k;
}

void solve();

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target = a[f - 1], before = 0, after = 0;
    for (int i = 0; i < n; i++)
    {
        if (target == a[i])
        {
            before++;
        }
    }

    sort(a.begin(), a.end(), greater<int>());

    for (int i = k; i < n; i++)
    {
        if (target == a[i])
        {
            after++;
        }
    }

    if (after == 0)
    {
        cout << "YES\n";
    }
    else if (after == before)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "MAYBE\n";
    }
}
