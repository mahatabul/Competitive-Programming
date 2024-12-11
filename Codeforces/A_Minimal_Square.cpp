#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;

        int max1=max(2*a,b),max2=max(b*2,a),abmax=a+b;

        cout<<pow(min({max1,max2,abmax}),2)<<"\n";
    }
    

    return 0;
}