
#include <iostream>
using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        if (x == 1)
        {
            cout << 0 << endl;
            continue;
        }

        int moves = 0;
        bool possible = true;

        while (x != 1)
        {
            if (x % 6 == 0)
            {
                x /= 6;
            }
            else if (x % 3 == 0)
            {
                x *= 2;
            }
            else
            {
                possible = false;
                break;
            }
            moves++;
        }

        if (possible)
        {
            cout << moves << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
