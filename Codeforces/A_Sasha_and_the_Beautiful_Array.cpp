#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        vector<ll>a(n);
        for (auto i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        ll sum = 0;

        for (auto i = 1; i < n; i++)
        {
            sum+=(a[i]-a[i-1]);
        }
        
        cout<<sum<<endl;
    }
    

    return 0;
}