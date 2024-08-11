#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int d(string s1, string s2)
{
    int dif = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        dif += abs(s1[i] - s2[i]);
    }
    return dif;
}

int main()
{
    fastio;

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        string s[n];

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        int diff = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i==j)
                {
                    continue;
                }

                else
                {
                    diff = min(diff, d(s[i], s[j]));
                }
            }
        }
        cout<<diff<<endl;
    }

    return 0;
}