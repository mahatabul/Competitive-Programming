/* #include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    ll t;
    cin >> t;
    while (t--)
    {
        ll turn = 1, x, y, k, moves = 0;
        cin >> x >> y >> k;
        ll x1, y1;
        x1 = y1 = 0;

        while (x1 < x || y1 < y)
        {
            if ((turn & 1))
            {
                x1 += min(k, x - x1);
            }
            else if (turn % 2 == 0)
            {
                y1 += min(k, y - y1);
            }

            turn += 1;
            moves += 1;
        }

        cout << moves << endl;
    }

    return 0;
}
 */

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        ll x,y,k;
        cin>>x>>y>>k;

        ll x_moves,y_moves;

        x_moves = x/k;
        if (x%k!=0)
        {
            x_moves++;
        }
        
        y_moves = y/k;
        if (y%k!=0)
        {
            y_moves++;
        }
        

        ll res = max((2*x_moves)-1,2*y_moves);

        cout<<res<<endl;

    }
    

    return 0;
}