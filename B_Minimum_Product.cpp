#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

ll process(ll fir, ll y , ll sec , ll x , ll n){
    ll e = min(fir-y,n);
    n-=e;
    fir-=e;

    e = min(sec-x,n);
    n-=e;
    sec-=e;

    return fir*sec;

}
int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        ll a,b,x,y,n,e=0,ex=0;
        cin>>a>>b>>x>>y>>n;

        cout<<min(process(b,y,a,x,n),process(a,x,b,y,n))<<"\n";
        
        
    }
    

    return 0;
}