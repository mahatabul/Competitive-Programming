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

        vector<string>s(n);
        for (auto i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        for (auto i = n-1; i >= 0; i--)
        {
            string ss = s[i];
            for (int i = 0; i < ss.size(); i++)
            {
                if (ss[i]=='#')
                {
                    cout<<i+1<<" ";break;
                }
                
            }
            
        }
        cout<<endl;
    }
    

    return 0;
}