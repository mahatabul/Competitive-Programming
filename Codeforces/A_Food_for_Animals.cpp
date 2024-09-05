#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;

    while (t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        bool cat = false, dog = false;

        if (a>=x)
        {
            dog = true;
        }
        else if (c+a>=x)
        {
            dog = true;
            c-=(x-a);
        }
        

        if (b>=y)
        {
            cat = true;
        }
        
        else if (c+b>=y)
        {
            cat = true;
            c-=(y-b);
        }
        
        

        if (cat and dog)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        
        
        
        
    }
    

    return 0;
}