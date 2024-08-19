#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        int n, max_a = 0, max_b = 0;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            int temp;

            if (a[i] < b[i])
            {
                temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            max_a = max(a[i], max_a);
            max_b = max(b[i], max_b);
        }

        cout << max_a * max_b << "\n";
    }

    return 0;
}