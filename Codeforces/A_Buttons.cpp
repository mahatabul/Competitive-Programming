#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if (a>b)
        {
            cout<<"First\n";
        }
        else if (b>a)
        {
           cout<<"Second\n";
        }
        else if (a==b)
        {
            if (c%2==0)
            {
                cout<<"Second\n";
            }
            else cout<<"First\n";
        }
        
        
    }
    

    return 0;
}