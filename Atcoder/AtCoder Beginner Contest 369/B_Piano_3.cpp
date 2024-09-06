#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fastio;

    int n,fat=0;
    cin>>n;
    map<char,int>hp;
    while (n--)
    {
        int a;
        char s;
        cin>>a>>s;
        auto it = hp.find(s);
        if (it!=hp.end())
        {
            fat+=abs(hp[s]-a);
            hp[s]=a;
        }
        else
        {
            
            hp[s]=a;
        }
        
        
    }
    cout<<fat;

    return 0;
}