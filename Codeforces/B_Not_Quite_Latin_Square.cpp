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
        char table[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> table[i][j];
            }
        }
       
        for (int i = 0; i < 3; i++)
        {
            int a = 0, b = 0, c = 0;
            for (int j = 0; j < 3; j++)
            {
                if (table[i][j] == 'A')
                {
                    a++;
                }
                else if (table[i][j] == 'B')
                {
                    b++;
                }
                else if (table[i][j] == 'C')
                {
                    c++;
                }
            }
            if (c == 0)
            {
                cout << 'C' << endl;
                break;
            }
            if (b == 0)
            {
                cout << 'B' << endl;
                break;
            }
            if (a == 0)
            {
                cout << 'A' << endl;
                break;
            }
        }
    }

    return 0;
}
