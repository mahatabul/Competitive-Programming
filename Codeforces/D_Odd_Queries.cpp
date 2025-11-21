#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ff first
#define ss second

void solve()
{
    int n, q, sum = 0;
    cin >> n >> q;
    int arr[n];
    int presum[n + 1];
    presum[0] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        presum[i + 1] = sum;
    }

    while (q--)
    {
        int temp_sum;
        int l, r, k;
        cin >> l >> r >> k;
        temp_sum = presum[r]-presum[l-1];

        if (((sum - temp_sum) + ((r - l + 1) * k)) & 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{
    fast_io;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}