#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    ll t;
    cin>>t;
    while (t--)
    {
        ll n, bad = 0;
        cin>>n;
        vector<ll> a(n);

        for (auto i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll lowest = a[n-1];
        for (auto i = n-1; i >= 0; i--)
        {
            if (a[i]>lowest)
            {
                bad+=1;
            }
            else if (a[i]<lowest)
            {
                lowest = a[i];
            }
            else continue;
            
        }

        cout<<bad<<endl;
        
        
    }
    

    return 0;
}