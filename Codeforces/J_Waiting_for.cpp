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

    int bus_seat = 0, passenger = 0;
    int t;
    cin >> t;

    while (t--)
    {
        char c;
        int n;

        cin >> c >> n;
        if (c == 'P')
        {
            passenger += n;
        }
        else
        {
            if (n>passenger)
            {
                cout<<"YES\n";
                passenger=0;
            }
            else
            {
                cout<<"NO\n";
                passenger-=n;
            }
            
            
        }
    }

    return 0;
}