#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;cin>>t;
    while (t--)
    {
        int a,b,res = INT_MAX;
        cin>>a>>b;

        for (int i = a; i <= b; i++)
        {
            int c = (i-a)+(b-i);
            res = min(res,c);
        }
        cout<<res<<endl;

    }
    

    return 0;
}