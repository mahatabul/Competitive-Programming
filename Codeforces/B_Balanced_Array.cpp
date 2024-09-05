#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;
    cin>>t;

    while (t--)
    {
        ll n,sum1,sum2;
        sum1=sum2=0;
        cin>>n;

        if (n%4!=0)
        {
            cout<<"NO\n";
            continue;
        }

        cout<<"YES\n";

        for (auto i = 2; i <= n; i+=2)
        {
            cout<<i<<" ";
            sum1+=i;
        }
        for (auto i = 1; i <= n-2; i+=2)
        {
            cout<<i<<" ";
            sum2+=i;
        }
        cout<<sum1-sum2<<"\n";
        
    }
    

    return 0;
}