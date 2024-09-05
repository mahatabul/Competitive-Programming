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

        if (a==0 and b!=0)
        {
            cout<<1;
        }
        else if (a!=0 and b==0)
        {
            cout<<a+1;
        }
        else
        {
            cout<<a+1+(b*2);
        }
        
        cout<<endl;
        
    }
    

    return 0;
}