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
        int n, upvotes = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 1 or a == 3)
            {
                upvotes += 1;
            }
        }

        cout << upvotes << endl;
    }

    return 0;
}