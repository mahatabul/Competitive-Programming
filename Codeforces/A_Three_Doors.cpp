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
        bool flag = true;
        int x, steps = 0, key = 0;
        int doors[3];
        cin >> x;
        cin >> doors[0] >> doors[1] >> doors[2];

        if (doors[x - 1] == 0)
        {
            cout << "NO\n";
            continue;
        }
        key = doors[x - 1];
        key--;
        steps += 1;
        for (int i = 1; i <= 2; i++)
        {
            if (doors[key] != 0)
            {
                key = doors[key];
                key--;
                steps += 1;
            }

            else if (doors[key]==0 and steps<2)
            {
                flag = false;
                break;
            }
            
        }

        if (flag)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        
    }

    return 0;
} 
