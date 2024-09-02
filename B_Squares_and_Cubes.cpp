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

        int squares = (int)sqrt(n);
        int cubes =  (int)cbrt(n);

        int both = (int)sqrt(cbrt(n));

        cout<<squares+cubes-both<<endl;
       
    }
    

    return 0;
}