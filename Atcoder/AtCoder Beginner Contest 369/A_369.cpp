#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int a,b;
    cin>>a>>b;
    if (a==b)
    {
        cout<<1;
    }
    else if ((a+b)&1)
    {
       cout<<2;

    }
    else cout<<3;
    

    return 0;
}
