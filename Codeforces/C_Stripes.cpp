#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
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
    char m[8][8];
    bool go = true;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 8; i++)
    {
        int counting = 0;
        for (int j = 0; j < 8; j++)
        {
            if (m[i][j] == 'R')
            {
                counting += 1;
            }
        }
        if (counting == 8)
        {
            cout << "R" << endl;
            return;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        int counting = 0;
        for (int j = 0; j < 8; j++)
        {
            if (m[j][i] == 'B')
            {
                counting += 1;
            }
        }
        if (counting == 8)
        {
            cout << "B" << endl;
            return;
        }
    }

    //cout << "B" << endl;
}
