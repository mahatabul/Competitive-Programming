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

int main()
{
    fastio;
    int n, e = -1;
    cin >> n;
    bool found = false;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            int sum = (a[i] + a[j]);
            if (sum % 2 == 0)
            {
                e = max(e, sum);
                break;
            }
        }
    }

    cout << e;
}