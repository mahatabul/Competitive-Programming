#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;

        int a , b; a=b=(n/3);

        if (n%3!=0)
        {
            a++;
        }

        if (a*2+b==n)
        {
            cout<<b<<" "<<a;
        }
        else
        {
            cout<<a<<" "<<b;
        }
        cout<<endl;
        
        

    }
     

    return 0;
}