

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        int n,m,k,burl = 0;
        cin>>n>>m>>k;


        int st = 1,ed = 1;
        
        burl+=((ed)*(n-st));
        st = n;
        burl+=((st)*(m-ed));
        ed = m;

        if (burl==k)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        
        
    }
    

    return 0;
}