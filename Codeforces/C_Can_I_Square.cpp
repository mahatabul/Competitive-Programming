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
        ll n;
        cin>>n;
        ll num=0;
        for (auto i = 0; i < n; i++)
        {
            ll a;cin>>a;
            num+=a;
        }
        
        ll ans = sqrt(num);
        if (ans*ans==num)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
        
    }
    

    return 0;
}