#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, max_apeared = 0, ans = 0;
    cin >> n;

    
    map<ll, ll> singers;

    for (auto i = 0; i < n; i++)
    {
        ll a;
        cin>>a;
        
        singers[a]++;
        ll b = singers[a];
        max_apeared = max(max_apeared, b);
    }

    for (auto it : singers)
    {
        if (it.second == max_apeared)
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}