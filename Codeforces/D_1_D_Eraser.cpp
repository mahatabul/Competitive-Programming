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
        int n, k, start = 0, turns = 0;
        cin >> n >> k;
        k -= 1;

        string s;
        cin >> s;

        vector<int> index;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                index.push_back(i);
            }
        }

        if (index.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 1; i < index.size(); i++)
            {
                if (index[i] > index[start] + k)
                {
                    turns++;
                    start = i;
                }
            }

            cout << turns + 1 << endl;
        }
    }

    return 0;
}