#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int sum = 0;
        cin >> n >> k;
        int a[n + 1];
        int b[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n, greater<int>());
        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[i])
            {
                sum-=a[i];
                sum+=b[i];
            }
        }
        
        cout << sum << endl;
    }

    return 0;
}