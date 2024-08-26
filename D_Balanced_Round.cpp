#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
    fastio;

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        

        vector<ll> a(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (n==2){
            if (abs(a[0]-a[1])>k)
            {
                cout<<1<<endl;
                
            }
            else cout<<0<<endl;

            continue;

        }

        sort(a.begin(),a.end());

        ll  e = 1,me=1;

        for (auto i = 1; i < n; i++)
        {
            if (abs(a[i]-a[i-1])<=k)
            {
                e++;
                me = max(e,me);
                
            }
            
            else 
            {
                e = 1;
            }
            
            
        }

        cout<<n-me<<endl;
        
    }

    return 0;
}